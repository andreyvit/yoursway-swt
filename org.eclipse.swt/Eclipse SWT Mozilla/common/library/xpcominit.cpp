/*******************************************************************************
 * Copyright (c) 2000, 2007 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "xpcominit_structs.h"
#include "xpcominit_stats.h"

#define XPCOMInit_NATIVE(func) Java_org_eclipse_swt_internal_mozilla_XPCOMInit_##func

#ifndef NO_GREVersionRange_1sizeof
extern "C" JNIEXPORT jint JNICALL XPCOMInit_NATIVE(GREVersionRange_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL XPCOMInit_NATIVE(GREVersionRange_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	XPCOMInit_NATIVE_ENTER(env, that, GREVersionRange_1sizeof_FUNC);
	rc = (jint)GREVersionRange_sizeof();
	XPCOMInit_NATIVE_EXIT(env, that, GREVersionRange_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_GRE_1GetGREPathWithProperties
extern "C" JNIEXPORT jint JNICALL XPCOMInit_NATIVE(GRE_1GetGREPathWithProperties)(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
JNIEXPORT jint JNICALL XPCOMInit_NATIVE(GRE_1GetGREPathWithProperties)
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
{
	GREVersionRange _arg0, *lparg0=NULL;
	jint rc = 0;
	XPCOMInit_NATIVE_ENTER(env, that, GRE_1GetGREPathWithProperties_FUNC);
	if (arg0) if ((lparg0 = getGREVersionRangeFields(env, arg0, &_arg0)) == NULL) goto fail;
	rc = (jint)GRE_GetGREPathWithProperties((const GREVersionRange *)lparg0, arg1, (const GREProperty *)arg2, arg3, (char *)arg4, arg5);
fail:
	if (arg0 && lparg0) setGREVersionRangeFields(env, arg0, lparg0);
	XPCOMInit_NATIVE_EXIT(env, that, GRE_1GetGREPathWithProperties_FUNC);
	return rc;
}
#endif

#ifndef NO_XPCOMGlueShutdown
extern "C" JNIEXPORT jint JNICALL XPCOMInit_NATIVE(XPCOMGlueShutdown)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL XPCOMInit_NATIVE(XPCOMGlueShutdown)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	XPCOMInit_NATIVE_ENTER(env, that, XPCOMGlueShutdown_FUNC);
	rc = (jint)XPCOMGlueShutdown();
	XPCOMInit_NATIVE_EXIT(env, that, XPCOMGlueShutdown_FUNC);
	return rc;
}
#endif

#ifndef NO_XPCOMGlueStartup
extern "C" JNIEXPORT jint JNICALL XPCOMInit_NATIVE(XPCOMGlueStartup)(JNIEnv *env, jclass that, jbyteArray arg0);
JNIEXPORT jint JNICALL XPCOMInit_NATIVE(XPCOMGlueStartup)
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc = 0;
	XPCOMInit_NATIVE_ENTER(env, that, XPCOMGlueStartup_FUNC);
	if (arg0) if ((lparg0 = env->GetByteArrayElements(arg0, NULL)) == NULL) goto fail;
	rc = (jint)XPCOMGlueStartup((const char *)lparg0);
fail:
	if (arg0 && lparg0) env->ReleaseByteArrayElements(arg0, lparg0, 0);
	XPCOMInit_NATIVE_EXIT(env, that, XPCOMGlueStartup_FUNC);
	return rc;
}
#endif

