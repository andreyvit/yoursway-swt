/*******************************************************************************
 * Copyright (c) 2007 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.cocoa;

public class NSDirectoryEnumerator extends NSEnumerator {

public NSDirectoryEnumerator() {
	super();
}

public NSDirectoryEnumerator(int id) {
	super(id);
}

public NSDictionary directoryAttributes() {
	int result = OS.objc_msgSend(this.id, OS.sel_directoryAttributes);
	return result != 0 ? new NSDictionary(result) : null;
}

public NSDictionary fileAttributes() {
	int result = OS.objc_msgSend(this.id, OS.sel_fileAttributes);
	return result != 0 ? new NSDictionary(result) : null;
}

public void skipDescendents() {
	OS.objc_msgSend(this.id, OS.sel_skipDescendents);
}

}
