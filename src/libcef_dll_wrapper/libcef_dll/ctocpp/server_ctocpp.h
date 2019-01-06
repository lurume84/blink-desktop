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
// $hash=d8a146e2ab60935699d6f610c948224e0209f74d$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_SERVER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_SERVER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_server_capi.h"
#include "include/cef/cef_server.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefServerCToCpp
    : public CefCToCppRefCounted<CefServerCToCpp, CefServer, cef_server_t> {
 public:
  CefServerCToCpp();

  // CefServer methods.
  CefRefPtr<CefTaskRunner> GetTaskRunner() OVERRIDE;
  void Shutdown() OVERRIDE;
  bool IsRunning() OVERRIDE;
  CefString GetAddress() OVERRIDE;
  bool HasConnection() OVERRIDE;
  bool IsValidConnection(int connection_id) OVERRIDE;
  void SendHttp200Response(int connection_id,
                           const CefString& content_type,
                           const void* data,
                           size_t data_size) OVERRIDE;
  void SendHttp404Response(int connection_id) OVERRIDE;
  void SendHttp500Response(int connection_id,
                           const CefString& error_message) OVERRIDE;
  void SendHttpResponse(int connection_id,
                        int response_code,
                        const CefString& content_type,
                        int64 content_length,
                        const HeaderMap& extra_headers) OVERRIDE;
  void SendRawData(int connection_id,
                   const void* data,
                   size_t data_size) OVERRIDE;
  void CloseConnection(int connection_id) OVERRIDE;
  void SendWebSocketMessage(int connection_id,
                            const void* data,
                            size_t data_size) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_SERVER_CTOCPP_H_
