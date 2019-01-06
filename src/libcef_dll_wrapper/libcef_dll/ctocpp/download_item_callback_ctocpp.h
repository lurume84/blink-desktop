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
// $hash=6ce01652bef45aacd1c1e2d3be6ed6bb2a0651bf$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_ITEM_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_ITEM_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_download_handler_capi.h"
#include "include/cef/cef_download_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDownloadItemCallbackCToCpp
    : public CefCToCppRefCounted<CefDownloadItemCallbackCToCpp,
                                 CefDownloadItemCallback,
                                 cef_download_item_callback_t> {
 public:
  CefDownloadItemCallbackCToCpp();

  // CefDownloadItemCallback methods.
  void Cancel() OVERRIDE;
  void Pause() OVERRIDE;
  void Resume() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_ITEM_CALLBACK_CTOCPP_H_
