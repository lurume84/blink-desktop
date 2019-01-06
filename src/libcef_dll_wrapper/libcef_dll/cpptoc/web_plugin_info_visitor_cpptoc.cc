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
// $hash=71deb0417b4ccd7e3abc94eba446dcaba50fe458$
//

#include "libcef_dll/cpptoc/web_plugin_info_visitor_cpptoc.h"
#include "libcef_dll/ctocpp/web_plugin_info_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
web_plugin_info_visitor_visit(struct _cef_web_plugin_info_visitor_t* self,
                              cef_web_plugin_info_t* info,
                              int count,
                              int total) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: info; type: refptr_diff
  DCHECK(info);
  if (!info)
    return 0;

  // Execute
  bool _retval = CefWebPluginInfoVisitorCppToC::Get(self)->Visit(
      CefWebPluginInfoCToCpp::Wrap(info), count, total);

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefWebPluginInfoVisitorCppToC::CefWebPluginInfoVisitorCppToC() {
  GetStruct()->visit = web_plugin_info_visitor_visit;
}

template <>
CefRefPtr<CefWebPluginInfoVisitor> CefCppToCRefCounted<
    CefWebPluginInfoVisitorCppToC,
    CefWebPluginInfoVisitor,
    cef_web_plugin_info_visitor_t>::UnwrapDerived(CefWrapperType type,
                                                  cef_web_plugin_info_visitor_t*
                                                      s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<
    CefWebPluginInfoVisitorCppToC,
    CefWebPluginInfoVisitor,
    cef_web_plugin_info_visitor_t>::DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType
    CefCppToCRefCounted<CefWebPluginInfoVisitorCppToC,
                        CefWebPluginInfoVisitor,
                        cef_web_plugin_info_visitor_t>::kWrapperType =
        WT_WEB_PLUGIN_INFO_VISITOR;
