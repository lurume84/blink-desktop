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
// $hash=b3e58d825a17ffd3f410cbae8774e1d18577751a$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_APP_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_APP_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_app_capi.h"
#include "include/cef/cef_app.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefAppCppToC
    : public CefCppToCRefCounted<CefAppCppToC, CefApp, cef_app_t> {
 public:
  CefAppCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_APP_CPPTOC_H_
