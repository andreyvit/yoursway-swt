package org.eclipse.swt.widgets;

import org.eclipse.swt.graphics.Rectangle;
import org.eclipse.swt.internal.cocoa.NSDrawer;
import org.eclipse.swt.internal.cocoa.NSRect;
import org.eclipse.swt.internal.cocoa.NSSize;

public class Drawer extends Composite {	

	public NSDrawer drawer;
	private final Shell shell;
	private final NSSize size;
	private final int edge;


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
		drawer.open();
		layout();
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
		// since the constructor calls super() first, this method
		// will be called first time before inst. vars were initialized
		if (size == null)
			return;
		
		if (drawer != null) {
			view = drawer.contentView();
			return;
		} else {
			drawer = (NSDrawer) (new NSDrawer()).alloc();
			drawer.initWithContentSize(size, edge);
		}

		createHandle(null);

		drawer.setContentView(topView());
		drawer.setDelegate(drawer);
		drawer.setParentWindow(shell.window);
	}

	void releaseHandle() {
		super.releaseHandle();
		if (drawer != null) {
			drawer.setDelegate(null);
			drawer.release();
			drawer = null;
		}
	}

}
