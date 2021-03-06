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
import org.eclipse.swt.*;

/**
 * <code>Transfer</code> provides a mechanism for converting between a java 
 * representation of data and a platform specific representation of data and 
 * vice versa.  It is used in data transfer operations such as drag and drop and 
 * clipboard copy/paste.
 *
 * <p>You should only need to become familiar with this class if you are 
 * implementing a Transfer subclass and you are unable to subclass the 
 * ByteArrayTransfer class.</p>
 * 
 * @see ByteArrayTransfer
 */
public abstract class Transfer {

private static String[] registeredTypes = new String[0];

static int createDotNetString (String string) {
	if (string == null) return 0;
	int length = string.length();
	char[] buffer = new char[length + 1];
	string.getChars(0, length, buffer, 0);
	int result = OS.gcnew_String(buffer);
	if (result == 0) SWT.error(SWT.ERROR_NO_HANDLES);
	return result;
}

static String createJavaString (int ptr) {
	int charArray = OS.String_ToCharArray(ptr);
	char[] chars = new char[OS.String_Length(ptr)];
	OS.memcpy(chars, charArray, chars.length * 2);
	OS.GCHandle_Free(charArray);
	return new String(chars);
}

/**
 * Returns a list of the platform specific data types that can be converted using 
 * this transfer agent.
 *
 * <p>Only the data type fields of the <code>TransferData</code> objects are filled 
 * in.</p>
 *
 * @return a list of the data types that can be converted using this transfer agent
 */
abstract public TransferData[] getSupportedTypes();

/**
 * Returns true if the <code>TransferData</code> data type can be converted 
 * using this transfer agent, or false otherwise (including if transferData is
 * <code>null</code>).
 *
 * @param transferData a platform specific description of a data type; only the data
 *  type fields of the <code>TransferData</code> object need to be filled in
 *
 * @return true if the transferData data type can be converted using this transfer 
 * agent
 */
abstract public boolean isSupportedType(TransferData transferData);

/**
 * Returns the platform specific names of the  data types that can be converted 
 * using this transfer agent.
 * 
 * @return the platform specific names of the data types that can be converted 
 * using this transfer agent.
 */
abstract protected String[] getTypeNames();

/**
 * Returns the platform specific ids of the  data types that can be converted using 
 * this transfer agent.
 * 
 * @return the platform specific ids of the data types that can be converted using 
 * this transfer agent
 */
abstract protected int[] getTypeIds();

/**
 * Converts a java representation of data to a platform specific representation of 
 * the data. 
 *
 * <p>On a successful conversion, the transferData.result field will be set as follows:
 * <ul>
 * <li>Windows: COM.S_OK
 * <li>Motif: 1
 * <li>GTK: 1
 * <li>Photon: 1
 * </ul></p>
 * 
 * <p>If this transfer agent is unable to perform the conversion, the transferData.result 
 * field will be set to a failure value as follows:
 * <ul>
 * <li>Windows: COM.DV_E_TYMED or COM.E_FAIL
 * <li>Motif: 0
 * <li>GTK: 0
 * <li>Photon: 0
 * </ul></p>
 *
 * @param object a java representation of the data to be converted; the type of
 * Object that is passed in is dependent on the <code>Transfer</code> subclass.
 *
 * @param transferData an empty TransferData object; this object will be 
 * filled in on return with the platform specific representation of the data
 * 
 * @exception org.eclipse.swt.SWTException <ul>
 *    <li>ERROR_INVALID_DATA - if object does not contain data in a valid format or is <code>null</code></li>
 * </ul>
 */
abstract protected void javaToNative (Object object, TransferData transferData);

/**
 * Converts a platform specific representation of data to a java representation.
 * 
 * @param transferData the platform specific representation of the data to be 
 * converted
 *
 * @return a java representation of the converted data if the conversion was 
 * successful; otherwise null.  If transferData is <code>null</code> then
 * <code>null</code> is returned.  The type of Object that is returned is 
 * dependent on the <code>Transfer</code> subclass.
 */
abstract protected Object nativeToJava(TransferData transferData);

/**
 * Registers a name for a data type and returns the associated unique identifier.
 *
 * <p>You may register the same type more than once, the same unique identifier 
 * will be returned if the type has been previously registered.</p>
 *
 * <p>Note: On windows, do <b>not</b> call this method with pre-defined 
 * Clipboard Format types such as CF_TEXT or CF_BITMAP because the 
 * pre-defined identifier will not be returned</p>
 *
 * @param formatName the name of a data type
 *
 * @return the unique identifier associated with this data type
 */
public static int registerType(String formatName){
	int length = registeredTypes.length;
	for (int i = 0; i < length; i++) {
		if (registeredTypes[i].equals(formatName))
			return i + 1;
	}
	String[] newTypes = new String[length + 1];
	System.arraycopy(registeredTypes, 0, newTypes, 0, length);
	newTypes[length] = formatName;
	registeredTypes = newTypes;
	return length + 1;
}

static String getTypeName(int registeredType) {
	--registeredType;
	if (registeredType < 0 || registeredType >= registeredTypes.length)
		DND.error(DND.ERROR_INVALID_DATA);
	return registeredTypes[registeredType];
}

static int getWPFFormat(int registeredType) {
	--registeredType;
	if (registeredType < 0 || registeredType >= registeredTypes.length)
		DND.error(DND.ERROR_INVALID_DATA);
	return createDotNetString(registeredTypes[registeredType]);
}

}
