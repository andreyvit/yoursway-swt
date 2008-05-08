package org.eclipse.swt.widgets;

import org.eclipse.swt.graphics.Rectangle;
import org.eclipse.swt.internal.cocoa.NSRect;
import org.eclipse.swt.internal.cocoa.NSSize;
import org.eclipse.swt.internal.cocoa.SWTDrawer;
import org.eclipse.swt.internal.cocoa.SWTDrawerDelegate;

public class Drawer extends Composite {	

	public SWTDrawer drawer;
	private final Shell shell;
	private final NSSize size;
	private final int edge;
	private SWTDrawerDelegate delegate;


	public Drawer(Shell shell, NSSize size, int edge) {
		super ();
		this.shell = shell;
		this.parent = shell;
		this.size = size;
		this.edge = edge;		
		this.display = shell.getDisplay();
		createWidget();
	}
	
	public Shell getShell() {
		return shell;
	}		
	
	public void toggle() {
		drawer.toggle(null);
	}
	
	public void open() {
		drawer.openOnEdge(edge);
		layout();
	}
	
	public void setMaxSize(NSSize size) {
		drawer.setMaxContentSize(size);
	}
	
	public void setMinSize(NSSize size) {
		drawer.setMinContentSize(size);
	}
	
	public void close() {
		drawer.close();
	}

	public Rectangle getClientArea () {
		checkWidget();
		NSRect size = drawer.contentView().frame();
		return new Rectangle (0, 0, (int)size.width, (int)size.height);
	}

	void createHandle() {	
		if (drawer != null) {
			view = drawer.contentView();
			return;
		} else {
			drawer = (SWTDrawer) ((SWTDrawer) new SWTDrawer().alloc()).initWithContentSize(size, edge);
			drawer.setTag(jniRef);
		}
		createHandle(null);
		
		delegate = (SWTDrawerDelegate)new SWTDrawerDelegate().alloc().init();
		delegate.setTag(jniRef);
		drawer.setDelegate(delegate);
		drawer.setContentView(topView());
		drawer.setParentWindow(shell.window);		
	}

	void releaseHandle() {
		drawer.setDelegate(null);
		if (delegate != null) delegate.release();
		delegate = null;
		super.releaseHandle ();
		drawer = null;
	}

	int drawerWillResizeContents_toSize(int drawer, NSSize size) {
		layout();
		return super.drawerWillResizeContents_toSize(drawer, size);
	}
	
}
