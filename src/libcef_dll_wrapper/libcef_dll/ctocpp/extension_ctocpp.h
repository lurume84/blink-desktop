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
// $hash=572e147d8e625ad7cb7b7e58e219b669824848b0$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_EXTENSION_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_EXTENSION_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_extension_capi.h"
#include "include/cef/capi/cef_extension_handler_capi.h"
#include "include/cef/capi/cef_request_context_capi.h"
#include "include/cef/cef_extension.h"
#include "include/cef/cef_extension_handler.h"
#include "include/cef/cef_request_context.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefExtensionCToCpp : public CefCToCppRefCounted<CefExtensionCToCpp,
                                                      CefExtension,
                                                      cef_extension_t> {
 public:
  CefExtensionCToCpp();

  // CefExtension methods.
  CefString GetIdentifier() OVERRIDE;
  CefString GetPath() OVERRIDE;
  CefRefPtr<CefDictionaryValue> GetManifest() OVERRIDE;
  bool IsSame(CefRefPtr<CefExtension> that) OVERRIDE;
  CefRefPtr<CefExtensionHandler> GetHandler() OVERRIDE;
  CefRefPtr<CefRequestContext> GetLoaderContext() OVERRIDE;
  bool IsLoaded() OVERRIDE;
  void Unload() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_EXTENSION_CTOCPP_H_
