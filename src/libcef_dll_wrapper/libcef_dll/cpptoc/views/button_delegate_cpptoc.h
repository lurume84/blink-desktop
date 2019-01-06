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
// $hash=baacad13c670358b557f8ff8d1fe82fff981a0ee$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_VIEWS_BUTTON_DELEGATE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_VIEWS_BUTTON_DELEGATE_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/views/cef_button_capi.h"
#include "include/cef/capi/views/cef_button_delegate_capi.h"
#include "include/cef/views/cef_button.h"
#include "include/cef/views/cef_button_delegate.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefButtonDelegateCppToC
    : public CefCppToCRefCounted<CefButtonDelegateCppToC,
                                 CefButtonDelegate,
                                 cef_button_delegate_t> {
 public:
  CefButtonDelegateCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_VIEWS_BUTTON_DELEGATE_CPPTOC_H_
