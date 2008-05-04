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
package org.eclipse.swt.dnd;

import org.eclipse.swt.internal.wpf.*;

 
/**
 * The class <code>TextTransfer</code> provides a platform specific mechanism 
 * for converting plain text represented as a java <code>String</code> 
 * to a platform specific representation of the data and vice versa.
 * 
 * <p>An example of a java <code>String</code> containing plain text is shown 
 * below:</p>
 * 
 * <code><pre>
 *     String textData = "Hello World";
 * </code></pre>
 * 
 * @see Transfer
 */
public class TextTransfer extends ByteArrayTransfer {

private static TextTransfer _instance = new TextTransfer();
private static int TYPEID = getTypeId();
	
/**
 * Returns the singleton instance of the TextTransfer class.
 *
 * @return the singleton instance of the TextTransfer class
 */
public static TextTransfer getInstance () {
	return _instance;
}

static int getTypeId() {
	int format = OS.DataFormats_UnicodeText();
	String name = createJavaString(format);
	OS.GCHandle_Free(format);
	return registerType(name);
}

private TextTransfer() {
}

boolean checkText(Object object) {
	return object != null && object instanceof String && ((String)object).length() > 0;
}

protected int[] getTypeIds(){
	return new int[]{TYPEID};
}

/**
 * This implementation of <code>javaToNative</code> converts plain text
 * represented by a java <code>String</code> to a platform specific representation.
 * 
 * @param object a java <code>String</code> containing text
 * @param transferData an empty <code>TransferData</code> object; this object
 *  will be filled in on return with the platform specific format of the data
 *  
 * @see Transfer#javaToNative
 */
public void javaToNative (Object object, TransferData transferData) {
	if (!checkText(object) || !isSupportedType(transferData)) {
		DND.error(DND.ERROR_INVALID_DATA);
	}
	transferData.pValue = createDotNetString((String)object);
}

/**
 * This implementation of <code>nativeToJava</code> converts a platform specific 
 * representation of plain text to a java <code>String</code>.
 * 
 * @param transferData the platform specific representation of the data to be converted
 * @return a java <code>String</code> containing text if the conversion was successful; otherwise null
 * 
 * @see Transfer#nativeToJava
 */
public Object nativeToJava(TransferData transferData) {
	if (!isSupportedType(transferData) || transferData.pValue == 0) return null;

	return createJavaString(transferData.pValue);
}
}
