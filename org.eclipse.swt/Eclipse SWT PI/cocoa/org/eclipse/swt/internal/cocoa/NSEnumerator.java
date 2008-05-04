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

public class NSEnumerator extends NSObject {

public NSEnumerator() {
	super();
}

public NSEnumerator(int id) {
	super(id);
}

public NSArray allObjects() {
	int result = OS.objc_msgSend(this.id, OS.sel_allObjects);
	return result != 0 ? new NSArray(result) : null;
}

public id nextObject() {
	int result = OS.objc_msgSend(this.id, OS.sel_nextObject);
	return result != 0 ? new id(result) : null;
}

}
