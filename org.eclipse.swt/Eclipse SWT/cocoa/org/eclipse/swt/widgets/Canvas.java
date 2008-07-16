/*******************************************************************************
 * Copyright (c) 2000, 2008 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.widgets;


import org.eclipse.swt.*;
import org.eclipse.swt.graphics.*;
import org.eclipse.swt.internal.cocoa.*;

/**
 * Instances of this class provide a surface for drawing
 * arbitrary graphics.
 * <dl>
 * <dt><b>Styles:</b></dt>
 * <dd>(none)</dd>
 * <dt><b>Events:</b></dt>
 * <dd>(none)</dd>
 * </dl>
 * <p>
 * This class may be subclassed by custom control implementors
 * who are building controls that are <em>not</em> constructed
 * from aggregates of other controls. That is, they are either
 * painted using SWT graphics calls or are handled by native
 * methods.
 * </p>
 *
 * @see Composite
 * @see <a href="http://www.eclipse.org/swt/snippets/#canvas">Canvas snippets</a>
 * @see <a href="http://www.eclipse.org/swt/examples.php">SWT Example: ControlExample</a>
 * @see <a href="http://www.eclipse.org/swt/">Sample code and further information</a>
 */
public class Canvas extends Composite {
	Caret caret;
	IME ime;

Canvas () {
	/* Do nothing */
}

int attributedSubstringFromRange (int id, int sel, int range) {
	if (ime != null) return ime.attributedSubstringFromRange (id, sel, range);
	return super.attributedSubstringFromRange(id, sel, range);
}

boolean becomeFirstResponder (int id, int sel) {
	if (caret != null) caret.setFocus ();
	return super.becomeFirstResponder(id, sel);
}

boolean resignFirstResponder (int id, int sel) {
	if (caret != null) caret.killFocus ();
	return super.resignFirstResponder(id, sel);
}


/**
 * Constructs a new instance of this class given its parent
 * and a style value describing its behavior and appearance.
 * <p>
 * The style value is either one of the style constants defined in
 * class <code>SWT</code> which is applicable to instances of this
 * class, or must be built by <em>bitwise OR</em>'ing together 
 * (that is, using the <code>int</code> "|" operator) two or more
 * of those <code>SWT</code> style constants. The class description
 * lists the style constants that are applicable to the class.
 * Style bits are also inherited from superclasses.
 * </p>
 *
 * @param parent a composite control which will be the parent of the new instance (cannot be null)
 * @param style the style of control to construct
 *
 * @exception IllegalArgumentException <ul>
 *    <li>ERROR_NULL_ARGUMENT - if the parent is null</li>
 * </ul>
 * @exception SWTException <ul>
 *    <li>ERROR_THREAD_INVALID_ACCESS - if not called from the thread that created the parent</li>
 * </ul>
 *
 * @see SWT
 * @see Widget#checkSubclass
 * @see Widget#getStyle
 */
public Canvas (Composite parent, int style) {
	super (parent, style);
}

int characterIndexForPoint (int id, int sel, int point) {
	if (ime != null) return ime.characterIndexForPoint (id, sel, point);
	return super.characterIndexForPoint (id, sel, point);
}

/** 
 * Fills the interior of the rectangle specified by the arguments,
 * with the receiver's background. 
 *
 * @param gc the gc where the rectangle is to be filled
 * @param x the x coordinate of the rectangle to be filled
 * @param y the y coordinate of the rectangle to be filled
 * @param width the width of the rectangle to be filled
 * @param height the height of the rectangle to be filled
 *
 * @exception IllegalArgumentException <ul>
 *    <li>ERROR_NULL_ARGUMENT - if the gc is null</li>
 *    <li>ERROR_INVALID_ARGUMENT - if the gc has been disposed</li>
 * </ul>
 * @exception SWTException <ul>
 *    <li>ERROR_WIDGET_DISPOSED - if the receiver has been disposed</li>
 *    <li>ERROR_THREAD_INVALID_ACCESS - if not called from the thread that created the receiver</li>
 * </ul>
 * 
 * @since 3.2
 */
public void drawBackground (GC gc, int x, int y, int width, int height) {
	checkWidget ();
	if (gc == null) error (SWT.ERROR_NULL_ARGUMENT);
	if (gc.isDisposed ()) error (SWT.ERROR_INVALID_ARGUMENT);
	Control control = findBackgroundControl ();
	if (control != null) {
		NSRect rect = new NSRect();
		rect.x = x;
		rect.y = y;
		rect.width = width;
		rect.height = height;
		control.fillBackground (view, gc.handle, rect);
	} else {
		gc.fillRectangle (x, y, width, height);
	}
}

void drawWidget (int id, NSRect rect) {
	super.drawWidget (id, rect);
	if (caret == null) return;
	if (caret.isShowing) {
		NSGraphicsContext context = NSGraphicsContext.currentContext();
		
		Image image = caret.image;
		if (image != null) {
			NSRect fromRect = new NSRect ();
			NSSize size = image.handle.size();
			fromRect.width = size.width;
			fromRect.height = size.height;
			NSPoint point = new NSPoint();
			point.x = caret.x;
			point.y = caret.y;
		 	image.handle.drawAtPoint(point, rect, OS.NSCompositeXOR, 1);
		} else {
			context.saveGraphicsState();
			context.setCompositingOperation(OS.NSCompositeXOR);
			NSRect drawRect = new NSRect();
			drawRect.x = caret.x;
			drawRect.y = caret.y;
			drawRect.width = caret.width != 0 ? caret.width : Caret.DEFAULT_WIDTH;
			drawRect.height = caret.height;
			context.setShouldAntialias(false);
			NSColor color = NSColor.colorWithDeviceRed(1, 1, 1, 1);
			color.set();
			NSBezierPath.fillRect(drawRect);
			context.restoreGraphicsState();
		}
	}
}

NSRect firstRectForCharacterRange (int id, int sel, int range) {
	if (ime != null) return ime.firstRectForCharacterRange (id, sel, range);
	return super.firstRectForCharacterRange (id, sel, range);
}

/**
 * Returns the caret.
 * <p>
 * The caret for the control is automatically hidden
 * and shown when the control is painted or resized,
 * when focus is gained or lost and when an the control
 * is scrolled.  To avoid drawing on top of the caret,
 * the programmer must hide and show the caret when
 * drawing in the window any other time.
 * </p>
 *
 * @return the caret for the receiver, may be null
 *
 * @exception SWTException <ul>
 *    <li>ERROR_WIDGET_DISPOSED - if the receiver has been disposed</li>
 *    <li>ERROR_THREAD_INVALID_ACCESS - if not called from the thread that created the receiver</li>
 * </ul>
 */
public Caret getCaret () {
	checkWidget();
    return caret;
}

/**
 * Returns the IME.
 *
 * @return the IME
 *
 * @exception SWTException <ul>
 *    <li>ERROR_WIDGET_DISPOSED - if the receiver has been disposed</li>
 *    <li>ERROR_THREAD_INVALID_ACCESS - if not called from the thread that created the receiver</li>
 * </ul>
 * 
 * @since 3.4
 */
public IME getIME () {
	checkWidget();
    return ime;
}

boolean hasMarkedText (int id, int sel) {
	if (ime != null) return ime.hasMarkedText (id, sel);
	return super.hasMarkedText (id, sel);
}

boolean insertText (int id, int sel, int string) {
	if (ime != null) {
		if (!ime.insertText (id, sel, string)) return false;
	}
	return super.insertText (id, sel, string);
}

NSRange markedRange (int id, int sel) {
	if (ime != null) return ime.markedRange (id, sel);
	return super.markedRange (id, sel);
}

//void redrawWidget (int control, boolean children) {
//	boolean isFocus = OS.VERSION < 0x1040 && caret != null && caret.isFocusCaret ();
//	if (isFocus) caret.killFocus ();
//	super.redrawWidget (control, children);
//	if (isFocus) caret.setFocus ();
//}
//
//void redrawWidget (int control, int x, int y, int width, int height, boolean all) {
//	boolean isFocus = OS.VERSION < 0x1040 && caret != null && caret.isFocusCaret ();
//	if (isFocus) caret.killFocus ();
//	super.redrawWidget (control, x, y, width, height, all);
//	if (isFocus) caret.setFocus ();
//}

void releaseChildren (boolean destroy) {
	if (caret != null) {
		caret.release (false);
		caret = null;
	}
	if (ime != null) {
		ime.release (false);
		ime = null;
	}
	super.releaseChildren (destroy);
}

/**
 * Scrolls a rectangular area of the receiver by first copying 
 * the source area to the destination and then causing the area
 * of the source which is not covered by the destination to
 * be repainted. Children that intersect the rectangle are
 * optionally moved during the operation. In addition, outstanding
 * paint events are flushed before the source area is copied to
 * ensure that the contents of the canvas are drawn correctly.
 *
 * @param destX the x coordinate of the destination
 * @param destY the y coordinate of the destination
 * @param x the x coordinate of the source
 * @param y the y coordinate of the source
 * @param width the width of the area
 * @param height the height of the area
 * @param all <code>true</code>if children should be scrolled, and <code>false</code> otherwise
 *
 * @exception SWTException <ul>
 *    <li>ERROR_WIDGET_DISPOSED - if the receiver has been disposed</li>
 *    <li>ERROR_THREAD_INVALID_ACCESS - if not called from the thread that created the receiver</li>
 * </ul>
 */
public void scroll (int destX, int destY, int x, int y, int width, int height, boolean all) {
	checkWidget();
	if (width <= 0 || height <= 0) return;
	int deltaX = destX - x, deltaY = destY - y;
	if (deltaX == 0 && deltaY == 0) return;
//	if (!isDrawing (handle)) return;
	boolean isFocus = caret != null && caret.isFocusCaret ();
	if (isFocus) caret.killFocus ();
	Rectangle clientRect = getClientArea ();
	Rectangle sourceRect = new Rectangle (x, y, width, height);
	if (sourceRect.intersects (clientRect)) {
		update (all);
	}
	NSRect damage = new NSRect();
	damage.x = x;
	damage.y = y;
	damage.width = width;
	damage.height = height;
	view.setNeedsDisplayInRect(damage);
	damage.x = destX;
	damage.y = destY;
	view.setNeedsDisplayInRect(damage);
//	Control control = findBackgroundControl ();
//	if ((control != null && control.backgroundImage != null)) {
//		redrawWidget (handle, x, y, width, height, false);
//		redrawWidget (handle, destX, destY, width, height, false);
//	} else {
//	    GC gc = new GC (this);
//	    gc.copyArea (x, y, width, height, destX, destY);
//	    gc.dispose ();
//	}
    if (all) {
		Control [] children = _getChildren ();
		for (int i=0; i<children.length; i++) {
			Control child = children [i];
			Rectangle rect = child.getBounds ();
			if (Math.min(x + width, rect.x + rect.width) >= Math.max (x, rect.x) && 
				Math.min(y + height, rect.y + rect.height) >= Math.max (y, rect.y)) {
					child.setLocation (rect.x + deltaX, rect.y + deltaY);
			}
		}
	}
	if (isFocus) caret.setFocus ();
}

NSRange selectedRange (int id, int sel) {
	if (ime != null) return ime.selectedRange (id, sel);
	return super.selectedRange (id, sel);
}

boolean sendKeyEvent (NSEvent nsEvent, int type) {
	if (caret != null) NSCursor.setHiddenUntilMouseMoves (true);
	return super.sendKeyEvent (nsEvent, type);
}

/**
 * Sets the receiver's caret.
 * <p>
 * The caret for the control is automatically hidden
 * and shown when the control is painted or resized,
 * when focus is gained or lost and when an the control
 * is scrolled.  To avoid drawing on top of the caret,
 * the programmer must hide and show the caret when
 * drawing in the window any other time.
 * </p>
 * @param caret the new caret for the receiver, may be null
 *
 * @exception IllegalArgumentException <ul>
 *    <li>ERROR_INVALID_ARGUMENT - if the caret has been disposed</li>
 * </ul>
 * @exception SWTException <ul>
 *    <li>ERROR_WIDGET_DISPOSED - if the receiver has been disposed</li>
 *    <li>ERROR_THREAD_INVALID_ACCESS - if not called from the thread that created the receiver</li>
 * </ul>
 */
public void setCaret (Caret caret) {
	checkWidget();
	Caret newCaret = caret;
	Caret oldCaret = this.caret;
	this.caret = newCaret;
	if (hasFocus ()) {
		if (oldCaret != null) oldCaret.killFocus ();
		if (newCaret != null) {
			if (newCaret.isDisposed()) error(SWT.ERROR_INVALID_ARGUMENT);
			newCaret.setFocus ();
		}
	}
}

public void setFont (Font font) {
	checkWidget ();
	if (caret != null) caret.setFont (font);
	super.setFont (font);
}

/**
 * Sets the receiver's IME.
 * 
 * @param ime the new IME for the receiver, may be null
 *
 * @exception IllegalArgumentException <ul>
 *    <li>ERROR_INVALID_ARGUMENT - if the IME has been disposed</li>
 * </ul>
 * @exception SWTException <ul>
 *    <li>ERROR_WIDGET_DISPOSED - if the receiver has been disposed</li>
 *    <li>ERROR_THREAD_INVALID_ACCESS - if not called from the thread that created the receiver</li>
 * </ul>
 * 
 * @since 3.4
 */
public void setIME (IME ime) {
	checkWidget ();
	if (ime != null && ime.isDisposed()) error(SWT.ERROR_INVALID_ARGUMENT);
	this.ime = ime;
}

boolean setMarkedText_selectedRange (int id, int sel, int string, int range) {
	if (ime != null) {
		if (!ime.setMarkedText_selectedRange (id, sel, string, range)) return false;
	}
	return super.setMarkedText_selectedRange (id, sel, string, range);
}

int validAttributesForMarkedText (int id, int sel) {
	if (ime != null) return ime.validAttributesForMarkedText (id, sel);
	return super.validAttributesForMarkedText(id, sel);
}

}
