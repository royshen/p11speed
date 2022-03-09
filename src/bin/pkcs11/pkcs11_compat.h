/* 
 * Copyright (c) 2022 Qiang Shen
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*****************************************************************************
 pkcs11_compat.h

 pkcs11 compatible header file which supports latest pkcs11 v3.0 header files.
 *****************************************************************************/

#ifndef _PKCS11_COMPAT_H
#define _PKCS11_COMPAT_H 1

#if defined(__cplusplus)
extern "C" {
#endif

#include <stddef.h>


/* 
 * According to OASIS standard pkcs11.h, the following platform specific
 * marcros must be defined in order to use standard pkcs11.h, pkcs11f.h 
 * and pkcs11t.h. 
 * Latest version of the specification:
 * http://docs.oasis-open.org/pkcs11/pkcs11-base/v3.0/pkcs11-base-v3.0.html
 */
#define CK_PTR *
#define CK_DECLARE_FUNCTION(returnType, name) \
   returnType name
#define CK_DECLARE_FUNCTION_POINTER(returnType, name) \
   returnType (* name)
#define CK_CALLBACK_FUNCTION(returnType, name) \
   returnType (* name)
#ifndef NULL_PTR
#define NULL_PTR NULL
#endif


#if defined(__cplusplus)
}
#endif

#endif /* _PKCS11_COMPAT_H */
