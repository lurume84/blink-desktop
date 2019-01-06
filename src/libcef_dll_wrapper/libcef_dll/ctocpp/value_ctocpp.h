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
// $hash=9a1c7aa15af70fc93c6b9af9422bbc2465ef00bb$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_values_capi.h"
#include "include/cef/cef_values.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefValueCToCpp
    : public CefCToCppRefCounted<CefValueCToCpp, CefValue, cef_value_t> {
 public:
  CefValueCToCpp();

  // CefValue methods.
  bool IsValid() OVERRIDE;
  bool IsOwned() OVERRIDE;
  bool IsReadOnly() OVERRIDE;
  bool IsSame(CefRefPtr<CefValue> that) OVERRIDE;
  bool IsEqual(CefRefPtr<CefValue> that) OVERRIDE;
  CefRefPtr<CefValue> Copy() OVERRIDE;
  CefValueType GetType() OVERRIDE;
  bool GetBool() OVERRIDE;
  int GetInt() OVERRIDE;
  double GetDouble() OVERRIDE;
  CefString GetString() OVERRIDE;
  CefRefPtr<CefBinaryValue> GetBinary() OVERRIDE;
  CefRefPtr<CefDictionaryValue> GetDictionary() OVERRIDE;
  CefRefPtr<CefListValue> GetList() OVERRIDE;
  bool SetNull() OVERRIDE;
  bool SetBool(bool value) OVERRIDE;
  bool SetInt(int value) OVERRIDE;
  bool SetDouble(double value) OVERRIDE;
  bool SetString(const CefString& value) OVERRIDE;
  bool SetBinary(CefRefPtr<CefBinaryValue> value) OVERRIDE;
  bool SetDictionary(CefRefPtr<CefDictionaryValue> value) OVERRIDE;
  bool SetList(CefRefPtr<CefListValue> value) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
