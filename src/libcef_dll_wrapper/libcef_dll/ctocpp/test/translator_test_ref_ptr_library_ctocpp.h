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
// $hash=3f4f83cf7ca3125da0918d5ff5d2c1d6999e877e$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_REF_PTR_LIBRARY_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_REF_PTR_LIBRARY_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef/capi/test/cef_translator_test_capi.h"
#include "include/cef/test/cef_translator_test.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefTranslatorTestRefPtrLibraryCToCpp
    : public CefCToCppRefCounted<CefTranslatorTestRefPtrLibraryCToCpp,
                                 CefTranslatorTestRefPtrLibrary,
                                 cef_translator_test_ref_ptr_library_t> {
 public:
  CefTranslatorTestRefPtrLibraryCToCpp();

  // CefTranslatorTestRefPtrLibrary methods.
  int GetValue() OVERRIDE;
  void SetValue(int value) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_TEST_TRANSLATOR_TEST_REF_PTR_LIBRARY_CTOCPP_H_
