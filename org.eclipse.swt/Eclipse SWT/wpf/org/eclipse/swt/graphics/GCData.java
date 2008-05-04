/*******************************************************************************
 * Copyright (c) 2000, 2007 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.graphics;

 
import org.eclipse.swt.*;

/**
 * Instances of this class are descriptions of GCs in terms
 * of unallocated platform-specific data fields.
 * <p>
 * <b>IMPORTANT:</b> This class is <em>not</em> part of the public
 * API for SWT. It is marked public only so that it can be shared
 * within the packages provided by SWT. It is not available on all
 * platforms, and should never be called from application code.
 * </p>
 */

public final class GCData {
	public Device device;
	public int style, state = -1;
	public int foreground;
	public int background;
	public Font font;
	public Pattern foregroundPattern;
	public Pattern backgroundPattern;
	public boolean xorMode;
	public int fillRule = SWT.FILL_EVEN_ODD;
	public int interpolation = SWT.DEFAULT;
	public int antialias = SWT.DEFAULT;
	public int textAntialias = SWT.DEFAULT;
	public int lineStyle = SWT.LINE_SOLID;
	public float lineWidth;
	public int lineCap = SWT.CAP_FLAT;
	public int lineJoin = SWT.JOIN_MITER;
	public float lineDashesOffset;
	public float[] lineDashes;
	public float lineMiterLimit = 10;
	public int alpha = 0xFF;

	public Image image;
	public int pen;
	public int brush, currentBrush;
	public int pushCount;
	public int clip;
	public int transform;
	public int visual;
	public int drawingContext;
}
