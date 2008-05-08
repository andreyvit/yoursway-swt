package org.eclipse.swt.internal.cocoa;

public class SWTDrawer extends NSDrawer {


	public void setTag(int tag) {
		OS.objc_msgSend(id, OS.sel_setTag_1, tag);
	}
	
}
