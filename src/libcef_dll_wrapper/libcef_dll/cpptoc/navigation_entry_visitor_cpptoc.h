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
// $hash=38f8c78e39c98ab30a2a8f020a2ba332efb76a69$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_NAVIGATION_ENTRY_VISITOR_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_NAVIGATION_ENTRY_VISITOR_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_browser_capi.h"
#include "include/cef/capi/cef_client_capi.h"
#include "include/cef/cef_browser.h"
#include "include/cef/cef_client.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefNavigationEntryVisitorCppToC
    : public CefCppToCRefCounted<CefNavigationEntryVisitorCppToC,
                                 CefNavigationEntryVisitor,
                                 cef_navigation_entry_visitor_t> {
 public:
  CefNavigationEntryVisitorCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_NAVIGATION_ENTRY_VISITOR_CPPTOC_H_
