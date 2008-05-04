/*******************************************************************************
 * Copyright (c) 2000, 2005 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.motif;


public class XmSpinBoxCallbackStruct extends XmAnyCallbackStruct {
	public int widget;
	public byte doit;
	public int position;
	public int value;
	public byte crossed_boundary;
	public static final int sizeof = 28;
}
