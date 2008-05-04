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

#include "xpcom.h"

#ifndef NO_nsID
void cachensIDFields(JNIEnv *env, jobject lpObject);
nsID *getnsIDFields(JNIEnv *env, jobject lpObject, nsID *lpStruct);
void setnsIDFields(JNIEnv *env, jobject lpObject, nsID *lpStruct);
#define nsID_sizeof() sizeof(nsID)
#else
#define cachensIDFields(a,b)
#define getnsIDFields(a,b,c) NULL
#define setnsIDFields(a,b,c)
#define nsID_sizeof() 0
#endif

