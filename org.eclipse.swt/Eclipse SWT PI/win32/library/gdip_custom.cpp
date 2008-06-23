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

#include "swt.h"
#include "gdip_structs.h"
#include "gdip_stats.h"

extern "C" {

#define Gdip_NATIVE(func) Java_org_eclipse_swt_internal_gdip_Gdip_##func

#ifndef NO_Graphics_1DrawLines
JNIEXPORT jint JNICALL Gdip_NATIVE(Graphics_1DrawLines)
	(JNIEnv *env, jclass that, SWT_PTR arg0, SWT_PTR arg1, jintArray arg2, jint arg3)
{
	Point *points=NULL;
	jint *lparg2=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, Graphics_1DrawLines_FUNC);
	if (arg2) if ((lparg2 = env->GetIntArrayElements(arg2, NULL)) == NULL) goto fail;
	if (lparg2) {
		points = new Point[arg3];
		for (int i=0, j=0; i<arg3; i++, j+=2) {
			Point *point = new Point(lparg2[j], lparg2[j + 1]);
			points[i] = *point;
			delete point;
		}
	}
	rc = (jint)((Graphics *)arg0)->DrawLines((Pen *)arg1, points, (INT)arg3);
fail:
	if (lparg2 && points) delete points;
	if (arg2 && lparg2) env->ReleaseIntArrayElements(arg2, lparg2, JNI_ABORT);
	Gdip_NATIVE_EXIT(env, that, Graphics_1DrawLines_FUNC);
	return rc;
}
#endif

#ifndef NO_Graphics_1DrawPolygon
JNIEXPORT jint JNICALL Gdip_NATIVE(Graphics_1DrawPolygon)
	(JNIEnv *env, jclass that, SWT_PTR arg0, SWT_PTR arg1, jintArray arg2, jint arg3)
{
	Point *points=NULL;
	jint *lparg2=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, Graphics_1DrawPolygon_FUNC);
	if (arg2) if ((lparg2 = env->GetIntArrayElements(arg2, NULL)) == NULL) goto fail;
	if (lparg2) {
		points = new Point[arg3];
		for (int i=0, j=0; i<arg3; i++, j+=2) {
			Point *point = new Point(lparg2[j], lparg2[j + 1]);
			points[i] = *point;
			delete point;
		}
	}
	rc = (jint)((Graphics *)arg0)->DrawPolygon((Pen *)arg1, points, (INT)arg3);
fail:
	if (lparg2 && points) delete points;
	if (arg2 && lparg2) env->ReleaseIntArrayElements(arg2, lparg2, JNI_ABORT);
	Gdip_NATIVE_EXIT(env, that, Graphics_1DrawPolygon_FUNC);
	return rc;
}
#endif

#ifndef NO_Graphics_1FillPolygon
JNIEXPORT jint JNICALL Gdip_NATIVE(Graphics_1FillPolygon)
	(JNIEnv *env, jclass that, SWT_PTR arg0, SWT_PTR arg1, jintArray arg2, jint arg3, jint arg4)
{
	Point *points=NULL;
	jint *lparg2=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, Graphics_1FillPolygon_FUNC);
	if (arg2) if ((lparg2 = env->GetIntArrayElements(arg2, NULL)) == NULL) goto fail;
	if (lparg2) {
		points = new Point[arg3];
		for (int i=0, j=0; i<arg3; i++, j+=2) {
			Point *point = new Point(lparg2[j], lparg2[j + 1]);
			points[i] = *point;
			delete point;
		}
	}
	rc = (jint)((Graphics *)arg0)->FillPolygon((Brush *)arg1, points, (INT)arg3, (FillMode)arg4);
fail:
	if (lparg2 && points) delete points;
	if (arg2 && lparg2) env->ReleaseIntArrayElements(arg2, lparg2, JNI_ABORT);
	Gdip_NATIVE_EXIT(env, that, Graphics_1FillPolygon_FUNC);
	return rc;
}
#endif

#ifndef NO_GraphicsPath_1GetPathPoints
JNIEXPORT jint JNICALL Gdip_NATIVE(GraphicsPath_1GetPathPoints)
	(JNIEnv *env, jclass that, SWT_PTR arg0, jfloatArray arg1, jint arg2)
{
	PointF *points=NULL;
	jfloat *lparg1=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, GraphicsPath_1GetPathPoints_FUNC);
	if (arg1) if ((lparg1 = env->GetFloatArrayElements(arg1, NULL)) == NULL) goto fail;
	if (lparg1) {
		points = new PointF[arg2];
	}
	rc = (jint)((GraphicsPath *)arg0)->GetPathPoints(points, arg2);
fail:
	if (lparg1 && points) {
		for (int i=0, j=0; i<arg2; i++, j+=2) {
			lparg1[j] = points[i].X;
			lparg1[j + 1] = points[i].Y;
		}
		delete points;
	}
	if (arg1 && lparg1) env->ReleaseFloatArrayElements(arg1, lparg1, 0);
	Gdip_NATIVE_EXIT(env, that, GraphicsPath_1GetPathPoints_FUNC);
	return rc;
}
#endif


#if (!defined(NO_Matrix_1TransformPoints__I_3FI) && !defined(SWT_PTR_SIZE_64)) || (!defined(NO_Matrix_1TransformPoints__J_3FI) && defined(SWT_PTR_SIZE_64))
#ifdef SWT_PTR_SIZE_64
JNIEXPORT jint JNICALL Gdip_NATIVE(Matrix_1TransformPoints__J_3FI)
#else
JNIEXPORT jint JNICALL Gdip_NATIVE(Matrix_1TransformPoints__I_3FI)
#endif
	(JNIEnv *env, jclass that, SWT_PTR arg0, jfloatArray arg1, jint arg2)
{
	PointF *points=NULL;
	jfloat *lparg1=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, Matrix_1TransformPoints__I_3FI_FUNC);
	if (arg1) if ((lparg1 = env->GetFloatArrayElements(arg1, NULL)) == NULL) goto fail;
	if (lparg1) {
		points = new PointF[arg2];
		for (int i=0, j=0; i<arg2; i++, j+=2) {
			PointF *point = new PointF(lparg1[j], lparg1[j + 1]);
			points[i] = *point;
			delete point;
		}
	}
	rc = (jint)((Matrix *)arg0)->TransformPoints(points, arg2);
fail:
	if (lparg1 && points) {
		for (int i=0, j=0; i<arg2; i++, j+=2) {
			lparg1[j] = points[i].X;
			lparg1[j + 1] = points[i].Y;
		}
		delete points;
	}
	if (arg1 && lparg1) env->ReleaseFloatArrayElements(arg1, lparg1, 0);
	Gdip_NATIVE_EXIT(env, that, Matrix_1TransformPoints__I_3FI_FUNC);
	return rc;
}
#endif

#ifndef NO_LinearGradientBrush_1SetInterpolationColors
JNIEXPORT jint JNICALL Gdip_NATIVE(LinearGradientBrush_1SetInterpolationColors)
	(JNIEnv *env, jclass that, SWT_PTR arg0, SWT_PTRArray arg1, jfloatArray arg2, jint arg3)
{
	Color *colors=NULL;
	SWT_PTR *lparg1=NULL;
	jfloat *lparg2=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, LinearGradientBrush_1SetInterpolationColors_FUNC);
	if (arg1) if ((lparg1 = env->GetSWT_PTRArrayElements(arg1, NULL)) == NULL) goto fail;
	if (arg2) if ((lparg2 = env->GetFloatArrayElements(arg2, NULL)) == NULL) goto fail;
	if (lparg1) {
		colors = new Color[arg3];
		for (int i=0; i<arg3; i++) {
			colors[i] = *(Color *)lparg1[i];
		}
	}
	rc = (jint)((LinearGradientBrush *)arg0)->SetInterpolationColors(colors, (const REAL *)lparg2, arg3);
fail:
	if (lparg1 && colors) {
		delete colors;
	}
	if (arg2 && lparg2) env->ReleaseFloatArrayElements(arg2, lparg2, 0);
	if (arg1 && lparg1) env->ReleaseSWT_PTRArrayElements(arg1, lparg1, 0);
	Gdip_NATIVE_EXIT(env, that, LinearGradientBrush_1SetInterpolationColors_FUNC);
	return rc;
}
#endif

#ifndef NO_PathGradientBrush_1SetInterpolationColors
JNIEXPORT jint JNICALL Gdip_NATIVE(PathGradientBrush_1SetInterpolationColors)
	(JNIEnv *env, jclass that, SWT_PTR arg0, SWT_PTRArray arg1, jfloatArray arg2, jint arg3)
{
	Color *colors=NULL;
	SWT_PTR *lparg1=NULL;
	jfloat *lparg2=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, PathGradientBrush_1SetInterpolationColors_FUNC);
	if (arg1) if ((lparg1 = env->GetSWT_PTRArrayElements(arg1, NULL)) == NULL) goto fail;
	if (arg2) if ((lparg2 = env->GetFloatArrayElements(arg2, NULL)) == NULL) goto fail;
	if (lparg1) {
		colors = new Color[arg3];
		for (int i=0; i<arg3; i++) {
			colors[i] = *(Color *)lparg1[i];
		}
	}
	rc = (jint)((PathGradientBrush *)arg0)->SetInterpolationColors(colors, (const REAL *)lparg2, arg3);
fail:
	if (lparg1 && colors) {
		delete colors;
	}
	if (arg2 && lparg2) env->ReleaseFloatArrayElements(arg2, lparg2, 0);
	if (arg1 && lparg1) env->ReleaseSWT_PTRArrayElements(arg1, lparg1, 0);
	Gdip_NATIVE_EXIT(env, that, PathGradientBrush_1SetInterpolationColors_FUNC);
	return rc;
}
#endif

#ifndef NO_PathGradientBrush_1SetSurroundColors
JNIEXPORT jint JNICALL Gdip_NATIVE(PathGradientBrush_1SetSurroundColors)
	(JNIEnv *env, jclass that, SWT_PTR arg0, SWT_PTRArray arg1, jintArray arg2)
{
	Color *colors=NULL;
	SWT_PTR *lparg1=NULL;
	jint *lparg2=NULL;
	jint rc = 0;
	Gdip_NATIVE_ENTER(env, that, PathGradientBrush_1SetSurroundColors_FUNC);
	if (arg1) if ((lparg1 = env->GetSWT_PTRArrayElements(arg1, NULL)) == NULL) goto fail;
	if (arg2) if ((lparg2 = env->GetIntArrayElements(arg2, NULL)) == NULL) goto fail;
	if (lparg1 && lparg2) {
		colors = new Color[lparg2[0]];
		for (int i=0; i<lparg2[0]; i++) {
			colors[i] = *(Color *)lparg1[i];
		}
	}
	rc = (jint)((PathGradientBrush *)arg0)->SetSurroundColors((Color *)colors, (INT *)lparg2);
fail:
	if (lparg1 && lparg2 && colors) {
		delete colors;
	}	
	if (arg2 && lparg2) env->ReleaseIntArrayElements(arg2, lparg2, 0);
	if (arg1 && lparg1) env->ReleaseSWT_PTRArrayElements(arg1, lparg1, 0);
	Gdip_NATIVE_EXIT(env, that, PathGradientBrush_1SetSurroundColors_FUNC);
	return rc;
}
#endif

#ifndef NO_GraphicsPath_1new___3I_3BII
JNIEXPORT SWT_PTR JNICALL Gdip_NATIVE(GraphicsPath_1new___3I_3BII)
	(JNIEnv *env, jclass that, jintArray arg0, jbyteArray arg1, jint arg2, jint arg3)
{
	Point *points=NULL;
	jint *lparg0=NULL;
	jbyte *lparg1=NULL;
	SWT_PTR rc = 0;
	Gdip_NATIVE_ENTER(env, that, GraphicsPath_1new___3I_3BII_FUNC);
	if (arg0) if ((lparg0 = env->GetIntArrayElements(arg0, NULL)) == NULL) goto fail;
	if (lparg0) {
		points = new Point[arg2];
		for (int i=0, j=0; i<arg2; i++, j+=2) {
			Point *point = new Point(lparg0[j], lparg0[j + 1]);
			points[i] = *point;
			delete point;
		}
	}
	if (arg1) if ((lparg1 = env->GetByteArrayElements(arg1, NULL)) == NULL) goto fail;
	rc = (SWT_PTR)new GraphicsPath(points, (BYTE *)lparg1, arg2, (FillMode)arg3);
fail:
	if (arg1 && lparg1) env->ReleaseByteArrayElements(arg1, lparg1, 0);
	if (lparg0 && points) delete points;
	if (arg0 && lparg0) env->ReleaseIntArrayElements(arg0, lparg0, 0);
	Gdip_NATIVE_EXIT(env, that, GraphicsPath_1new___3I_3BII_FUNC);
	return rc;
}
#endif

}
