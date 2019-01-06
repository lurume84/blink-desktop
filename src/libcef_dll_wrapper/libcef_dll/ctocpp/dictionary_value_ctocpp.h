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
// $hash=b5776a11cae3d350f591418690a5a8d6d18362dd$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DICTIONARY_VALUE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DICTIONARY_VALUE_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/cef_values_capi.h"
#include "include/cef/cef_values.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDictionaryValueCToCpp
    : public CefCToCppRefCounted<CefDictionaryValueCToCpp,
                                 CefDictionaryValue,
                                 cef_dictionary_value_t> {
 public:
  CefDictionaryValueCToCpp();

  // CefDictionaryValue methods.
  bool IsValid() OVERRIDE;
  bool IsOwned() OVERRIDE;
  bool IsReadOnly() OVERRIDE;
  bool IsSame(CefRefPtr<CefDictionaryValue> that) OVERRIDE;
  bool IsEqual(CefRefPtr<CefDictionaryValue> that) OVERRIDE;
  CefRefPtr<CefDictionaryValue> Copy(bool exclude_empty_children) OVERRIDE;
  size_t GetSize() OVERRIDE;
  bool Clear() OVERRIDE;
  bool HasKey(const CefString& key) OVERRIDE;
  bool GetKeys(KeyList& keys) OVERRIDE;
  bool Remove(const CefString& key) OVERRIDE;
  CefValueType GetType(const CefString& key) OVERRIDE;
  CefRefPtr<CefValue> GetValue(const CefString& key) OVERRIDE;
  bool GetBool(const CefString& key) OVERRIDE;
  int GetInt(const CefString& key) OVERRIDE;
  double GetDouble(const CefString& key) OVERRIDE;
  CefString GetString(const CefString& key) OVERRIDE;
  CefRefPtr<CefBinaryValue> GetBinary(const CefString& key) OVERRIDE;
  CefRefPtr<CefDictionaryValue> GetDictionary(const CefString& key) OVERRIDE;
  CefRefPtr<CefListValue> GetList(const CefString& key) OVERRIDE;
  bool SetValue(const CefString& key, CefRefPtr<CefValue> value) OVERRIDE;
  bool SetNull(const CefString& key) OVERRIDE;
  bool SetBool(const CefString& key, bool value) OVERRIDE;
  bool SetInt(const CefString& key, int value) OVERRIDE;
  bool SetDouble(const CefString& key, double value) OVERRIDE;
  bool SetString(const CefString& key, const CefString& value) OVERRIDE;
  bool SetBinary(const CefString& key,
                 CefRefPtr<CefBinaryValue> value) OVERRIDE;
  bool SetDictionary(const CefString& key,
                     CefRefPtr<CefDictionaryValue> value) OVERRIDE;
  bool SetList(const CefString& key, CefRefPtr<CefListValue> value) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DICTIONARY_VALUE_CTOCPP_H_
