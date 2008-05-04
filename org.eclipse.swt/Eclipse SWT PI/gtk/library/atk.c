/*******************************************************************************
 * Copyright (c) 2000, 2007 IBM Corporation and others. All rights reserved.
 * The contents of this file are made available under the terms
 * of the GNU Lesser General Public License (LGPL) Version 2.1 that
 * accompanies this distribution (lgpl-v21.txt).  The LGPL is also
 * available at http://www.gnu.org/licenses/lgpl.html.  If the version
 * of the LGPL at http://www.gnu.org is different to the version of
 * the LGPL accompanying this distribution and there is any conflict
 * between the two license versions, the terms of the LGPL accompanying
 * this distribution shall govern.
 * 
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "atk_structs.h"
#include "atk_stats.h"

#define ATK_NATIVE(func) Java_org_eclipse_swt_internal_accessibility_gtk_ATK_##func

#ifndef NO_AtkObjectFactoryClass_1sizeof
JNIEXPORT jint JNICALL ATK_NATIVE(AtkObjectFactoryClass_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, AtkObjectFactoryClass_1sizeof_FUNC);
	rc = (jint)AtkObjectFactoryClass_sizeof();
	ATK_NATIVE_EXIT(env, that, AtkObjectFactoryClass_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_AtkObjectFactory_1sizeof
JNIEXPORT jint JNICALL ATK_NATIVE(AtkObjectFactory_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, AtkObjectFactory_1sizeof_FUNC);
	rc = (jint)AtkObjectFactory_sizeof();
	ATK_NATIVE_EXIT(env, that, AtkObjectFactory_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO__1ATK_1ACTION_1GET_1IFACE
JNIEXPORT jint JNICALL ATK_NATIVE(_1ATK_1ACTION_1GET_1IFACE)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1ATK_1ACTION_1GET_1IFACE_FUNC);
	rc = (jint)ATK_ACTION_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, _1ATK_1ACTION_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO__1ATK_1COMPONENT_1GET_1IFACE
JNIEXPORT jint JNICALL ATK_NATIVE(_1ATK_1COMPONENT_1GET_1IFACE)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1ATK_1COMPONENT_1GET_1IFACE_FUNC);
	rc = (jint)ATK_COMPONENT_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, _1ATK_1COMPONENT_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO__1ATK_1OBJECT_1FACTORY_1CLASS
JNIEXPORT jint JNICALL ATK_NATIVE(_1ATK_1OBJECT_1FACTORY_1CLASS)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1ATK_1OBJECT_1FACTORY_1CLASS_FUNC);
	rc = (jint)ATK_OBJECT_FACTORY_CLASS(arg0);
	ATK_NATIVE_EXIT(env, that, _1ATK_1OBJECT_1FACTORY_1CLASS_FUNC);
	return rc;
}
#endif

#ifndef NO__1ATK_1SELECTION_1GET_1IFACE
JNIEXPORT jint JNICALL ATK_NATIVE(_1ATK_1SELECTION_1GET_1IFACE)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1ATK_1SELECTION_1GET_1IFACE_FUNC);
	rc = (jint)ATK_SELECTION_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, _1ATK_1SELECTION_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO__1ATK_1TEXT_1GET_1IFACE
JNIEXPORT jint JNICALL ATK_NATIVE(_1ATK_1TEXT_1GET_1IFACE)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1ATK_1TEXT_1GET_1IFACE_FUNC);
	rc = (jint)ATK_TEXT_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, _1ATK_1TEXT_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO__1GTK_1ACCESSIBLE
JNIEXPORT jint JNICALL ATK_NATIVE(_1GTK_1ACCESSIBLE)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1GTK_1ACCESSIBLE_FUNC);
	rc = (jint)GTK_ACCESSIBLE(arg0);
	ATK_NATIVE_EXIT(env, that, _1GTK_1ACCESSIBLE_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1focus_1tracker_1notify
JNIEXPORT void JNICALL ATK_NATIVE(_1atk_1focus_1tracker_1notify)
	(JNIEnv *env, jclass that, jint arg0)
{
	ATK_NATIVE_ENTER(env, that, _1atk_1focus_1tracker_1notify_FUNC);
	atk_focus_tracker_notify((AtkObject *)arg0);
	ATK_NATIVE_EXIT(env, that, _1atk_1focus_1tracker_1notify_FUNC);
}
#endif

#ifndef NO__1atk_1get_1default_1registry
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1get_1default_1registry)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1get_1default_1registry_FUNC);
	rc = (jint)atk_get_default_registry();
	ATK_NATIVE_EXIT(env, that, _1atk_1get_1default_1registry_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1object_1factory_1create_1accessible
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1object_1factory_1create_1accessible)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1object_1factory_1create_1accessible_FUNC);
	rc = (jint)atk_object_factory_create_accessible((AtkObjectFactory *)arg0, (GObject *)arg1);
	ATK_NATIVE_EXIT(env, that, _1atk_1object_1factory_1create_1accessible_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1object_1factory_1get_1accessible_1type
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1object_1factory_1get_1accessible_1type)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1object_1factory_1get_1accessible_1type_FUNC);
	rc = (jint)atk_object_factory_get_accessible_type((AtkObjectFactory *)arg0);
	ATK_NATIVE_EXIT(env, that, _1atk_1object_1factory_1get_1accessible_1type_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1object_1initialize
JNIEXPORT void JNICALL ATK_NATIVE(_1atk_1object_1initialize)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, _1atk_1object_1initialize_FUNC);
	atk_object_initialize((AtkObject *)arg0, (gpointer)arg1);
	ATK_NATIVE_EXIT(env, that, _1atk_1object_1initialize_FUNC);
}
#endif

#ifndef NO__1atk_1object_1ref_1relation_1set
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1object_1ref_1relation_1set)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1object_1ref_1relation_1set_FUNC);
	rc = (jint)atk_object_ref_relation_set((AtkObject *)arg0);
	ATK_NATIVE_EXIT(env, that, _1atk_1object_1ref_1relation_1set_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1registry_1get_1factory
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1registry_1get_1factory)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1registry_1get_1factory_FUNC);
	rc = (jint)atk_registry_get_factory((AtkRegistry *)arg0, (GType)arg1);
	ATK_NATIVE_EXIT(env, that, _1atk_1registry_1get_1factory_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1registry_1set_1factory_1type
JNIEXPORT void JNICALL ATK_NATIVE(_1atk_1registry_1set_1factory_1type)
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	ATK_NATIVE_ENTER(env, that, _1atk_1registry_1set_1factory_1type_FUNC);
	atk_registry_set_factory_type((AtkRegistry *)arg0, (GType)arg1, (GType)arg2);
	ATK_NATIVE_EXIT(env, that, _1atk_1registry_1set_1factory_1type_FUNC);
}
#endif

#ifndef NO__1atk_1relation_1set_1get_1n_1relations
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1relation_1set_1get_1n_1relations)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1relation_1set_1get_1n_1relations_FUNC);
	rc = (jint)atk_relation_set_get_n_relations((AtkRelationSet *)arg0);
	ATK_NATIVE_EXIT(env, that, _1atk_1relation_1set_1get_1n_1relations_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1relation_1set_1get_1relation
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1relation_1set_1get_1relation)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1relation_1set_1get_1relation_FUNC);
	rc = (jint)atk_relation_set_get_relation((AtkRelationSet *)arg0, arg1);
	ATK_NATIVE_EXIT(env, that, _1atk_1relation_1set_1get_1relation_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1relation_1set_1remove
JNIEXPORT void JNICALL ATK_NATIVE(_1atk_1relation_1set_1remove)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, _1atk_1relation_1set_1remove_FUNC);
	atk_relation_set_remove((AtkRelationSet *)arg0, (AtkRelation *)arg1);
	ATK_NATIVE_EXIT(env, that, _1atk_1relation_1set_1remove_FUNC);
}
#endif

#ifndef NO__1atk_1state_1set_1add_1state
JNIEXPORT jboolean JNICALL ATK_NATIVE(_1atk_1state_1set_1add_1state)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	jboolean rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1state_1set_1add_1state_FUNC);
	rc = (jboolean)atk_state_set_add_state((AtkStateSet *)arg0, (AtkStateType)arg1);
	ATK_NATIVE_EXIT(env, that, _1atk_1state_1set_1add_1state_FUNC);
	return rc;
}
#endif

#ifndef NO__1atk_1state_1set_1new
JNIEXPORT jint JNICALL ATK_NATIVE(_1atk_1state_1set_1new)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1atk_1state_1set_1new_FUNC);
	rc = (jint)atk_state_set_new();
	ATK_NATIVE_EXIT(env, that, _1atk_1state_1set_1new_FUNC);
	return rc;
}
#endif

#ifndef NO__1call__II
JNIEXPORT jint JNICALL ATK_NATIVE(_1call__II)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1call__II_FUNC);
	rc = (jint)((jint (*)())arg0)(arg1);
	ATK_NATIVE_EXIT(env, that, _1call__II_FUNC);
	return rc;
}
#endif

#ifndef NO__1call__III
JNIEXPORT jint JNICALL ATK_NATIVE(_1call__III)
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1call__III_FUNC);
	rc = (jint)((jint (*)())arg0)(arg1, arg2);
	ATK_NATIVE_EXIT(env, that, _1call__III_FUNC);
	return rc;
}
#endif

#ifndef NO__1call__IIII
JNIEXPORT jint JNICALL ATK_NATIVE(_1call__IIII)
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1call__IIII_FUNC);
	rc = (jint)((jint (*)())arg0)(arg1, arg2, arg3);
	ATK_NATIVE_EXIT(env, that, _1call__IIII_FUNC);
	return rc;
}
#endif

#ifndef NO__1call__IIIII
JNIEXPORT jint JNICALL ATK_NATIVE(_1call__IIIII)
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1call__IIIII_FUNC);
	rc = (jint)((jint (*)())arg0)(arg1, arg2, arg3, arg4);
	ATK_NATIVE_EXIT(env, that, _1call__IIIII_FUNC);
	return rc;
}
#endif

#ifndef NO__1call__IIIIII
JNIEXPORT jint JNICALL ATK_NATIVE(_1call__IIIIII)
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1call__IIIIII_FUNC);
	rc = (jint)((jint (*)())arg0)(arg1, arg2, arg3, arg4, arg5);
	ATK_NATIVE_EXIT(env, that, _1call__IIIIII_FUNC);
	return rc;
}
#endif

#ifndef NO__1call__IIIIIII
JNIEXPORT jint JNICALL ATK_NATIVE(_1call__IIIIIII)
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, _1call__IIIIIII_FUNC);
	rc = (jint)((jint (*)())arg0)(arg1, arg2, arg3, arg4, arg5, arg6);
	ATK_NATIVE_EXIT(env, that, _1call__IIIIIII_FUNC);
	return rc;
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2)
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2_FUNC);
	if (arg1) getAtkActionIfaceFields(env, arg1, (AtkActionIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2_FUNC);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2)
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2_FUNC);
	if (arg1) getAtkComponentIfaceFields(env, arg1, (AtkComponentIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2_FUNC);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2)
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2_FUNC);
	if (arg1) getAtkHypertextIfaceFields(env, arg1, (AtkHypertextIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2_FUNC);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2)
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2_FUNC);
	if (arg1) getAtkObjectClassFields(env, arg1, (AtkObjectClass *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2_FUNC);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2)
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2_FUNC);
	if (arg1) getAtkObjectFactoryClassFields(env, arg1, (AtkObjectFactoryClass *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2_FUNC);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2)
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2_FUNC);
	if (arg1) getAtkSelectionIfaceFields(env, arg1, (AtkSelectionIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2_FUNC);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2)
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2_FUNC);
	if (arg1) getAtkTextIfaceFields(env, arg1, (AtkTextIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__ILorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2I_FUNC);
	if (arg0) setAtkActionIfaceFields(env, arg0, (AtkActionIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2I_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2I_FUNC);
	if (arg0) setAtkComponentIfaceFields(env, arg0, (AtkComponentIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2I_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2I_FUNC);
	if (arg0) setAtkHypertextIfaceFields(env, arg0, (AtkHypertextIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2I_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2I_FUNC);
	if (arg0) setAtkObjectClassFields(env, arg0, (AtkObjectClass *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2I_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2I_FUNC);
	if (arg0) setAtkObjectFactoryClassFields(env, arg0, (AtkObjectFactoryClass *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectFactoryClass_2I_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2I_FUNC);
	if (arg0) setAtkSelectionIfaceFields(env, arg0, (AtkSelectionIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2I_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2I_FUNC);
	if (arg0) setAtkTextIfaceFields(env, arg0, (AtkTextIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2I_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_GtkAccessible_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_GtkAccessible_2I)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_GtkAccessible_2I_FUNC);
	if (arg0) setGtkAccessibleFields(env, arg0, (GtkAccessible *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_GtkAccessible_2I_FUNC);
}
#endif

