/*******************************************************************************
 * Copyright (c) 2003, 2008 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.browser;


import org.eclipse.swt.SWT;
import org.eclipse.swt.browser.Browser;
import org.eclipse.swt.internal.cocoa.*;
import org.eclipse.swt.widgets.*;

class MozillaDelegate {
	Browser browser;
	Listener listener;
	boolean hasFocus;
	
MozillaDelegate (Browser browser) {
	super ();
	this.browser = browser;
}

static Browser findBrowser (int handle) {
	Display display = Display.getCurrent ();
	return (Browser)display.findWidget (handle);
}

static char[] mbcsToWcs (String codePage, byte [] buffer) {
//	int encoding = OS.CFStringGetSystemEncoding ();
//	int cfstring = OS.CFStringCreateWithBytes (OS.kCFAllocatorDefault, buffer, buffer.length, encoding, false);
//	char[] chars = null;
//	if (cfstring != 0) {
//		int length = OS.CFStringGetLength (cfstring);
//		chars = new char [length];
//		if (length != 0) {
//			CFRange range = new CFRange ();
//			range.length = length;
//			OS.CFStringGetCharacters (cfstring, range, chars);
//		}
//		OS.CFRelease (cfstring);
//	}
//	return chars;
	return new String(buffer).toCharArray();
}

static byte[] wcsToMbcs (String codePage, String string, boolean terminate) {
//	char[] chars = new char [string.length()];
//	string.getChars (0, chars.length, chars, 0);
//	int cfstring = OS.CFStringCreateWithCharacters (OS.kCFAllocatorDefault, chars, chars.length);
//	byte[] buffer = null;
//	if (cfstring != 0) {
//		CFRange range = new CFRange ();
//		range.length = chars.length;
//		int encoding = OS.CFStringGetSystemEncoding ();
//		int[] size = new int[1];
//		int numChars = OS.CFStringGetBytes (cfstring, range, encoding, (byte)'?', true, null, 0, size);
//		buffer = new byte [size[0] + (terminate ? 1 : 0)];
//		if (numChars != 0) {
//			numChars = OS.CFStringGetBytes (cfstring, range, encoding, (byte)'?', true, buffer, size[0], size);
//		}
//		OS.CFRelease (cfstring);
//	}
//	return buffer;
	if (terminate) string += "\0";
	return string.getBytes();
}

int getHandle () {
	return browser.view.id;
}

String getLibraryName () {
	return "libxpcom.dylib"; //$NON-NLS-1$
}

String getSWTInitLibraryName () {
	return "swt-xulrunner"; //$NON-NLS-1$
}

void handleFocus () {
	if (hasFocus) return;
	hasFocus = true;
	((Mozilla)browser.webBrowser).Activate ();
	browser.setFocus ();
	listener = new Listener () {
		public void handleEvent (Event event) {
			if (event.widget == browser) return;
			((Mozilla)browser.webBrowser).Deactivate ();
			hasFocus = false;
			browser.getDisplay ().removeFilter (SWT.FocusIn, this);
			browser.getShell ().removeListener (SWT.Deactivate, this);
			listener = null;
		}
	
	};
	browser.getDisplay ().addFilter (SWT.FocusIn, listener);
	browser.getShell ().addListener (SWT.Deactivate, listener);
}

void handleMouseDown () {
}

boolean hookEnterExit () {
	return true;
}

void init () {
}

boolean needsSpinup () {
	return false;
}

void onDispose (int embedHandle) {
	if (listener != null) {
		browser.getDisplay ().removeFilter (SWT.FocusIn, listener);
		browser.getShell ().removeListener (SWT.Deactivate, listener);
		listener = null;
	}
	browser = null;
}

void setSize (int embedHandle, int width, int height) {
	// TODO
}

}
