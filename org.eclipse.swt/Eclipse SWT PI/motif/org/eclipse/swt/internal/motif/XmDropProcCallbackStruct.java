/*******************************************************************************
 * Copyright (c) 2000, 2003 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.motif;

 
public class XmDropProcCallbackStruct extends XmAnyCallbackStruct {
	public int timeStamp;
	public int dragContext;
	public short x;
	public short y;
	public byte dropSiteStatus;
	public byte operation;
	public byte operations;
	public byte dropAction;
	public static final int sizeof = 24;
}
