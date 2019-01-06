// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=b75cfd2baa4d086321a63169269498e391813b5f$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_DELETE_COOKIES_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_DELETE_COOKIES_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_cookie_capi.h"
#include "include/cef/cef_cookie.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefDeleteCookiesCallbackCppToC
    : public CefCppToCRefCounted<CefDeleteCookiesCallbackCppToC,
                                 CefDeleteCookiesCallback,
                                 cef_delete_cookies_callback_t> {
 public:
  CefDeleteCookiesCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_DELETE_COOKIES_CALLBACK_CPPTOC_H_
