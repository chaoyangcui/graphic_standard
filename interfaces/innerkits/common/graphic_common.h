/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INTERFACES_INNERKITS_COMMON_GRAPHIC_COMMON_H
#define INTERFACES_INNERKITS_COMMON_GRAPHIC_COMMON_H

#include <cstdint>
#include <map>
#include <string>

namespace OHOS {
#include "graphic_common_c.h"

static const std::map<GSError, std::string> GSErrorStrs = {
    {GSERROR_OK,                    "<200 ok>"},
    {GSERROR_INVALID_ARGUMENTS,     "<400 invalid arguments>"},
    {GSERROR_NO_PERMISSION,         "<403 no permission>"},
    {GSERROR_CONNOT_CONNECT_SAMGR,  "<404 connot connect to samgr>"},
    {GSERROR_CONNOT_CONNECT_SERVER, "<404 connot connect to server>"},
    {GSERROR_CONNOT_CONNECT_WESTON, "<404 connot connect to weston>"},
    {GSERROR_NO_BUFFER,             "<406 no buffer>"},
    {GSERROR_NO_ENTRY,              "<406 no entry>"},
    {GSERROR_OUT_OF_RANGE,          "<406 out of range>"},
    {GSERROR_INVALID_OPERATING,     "<412 invalid operating>"},
    {GSERROR_NO_CONSUMER,           "<412 no consumer>"},
    {GSERROR_NOT_INIT,              "<412 not init>"},
    {GSERROR_TYPE_ERROR,            "<412 type error>"},
    {GSERROR_API_FAILED,            "<500 api call failed>"},
    {GSERROR_INTERNEL,              "<500 internal error>"},
    {GSERROR_NO_MEM,                "<500 no memory>"},
    {GSERROR_PROXY_NOT_INCLUDE,     "<500 proxy not include>"},
    {GSERROR_SERVER_ERROR,          "<500 server occur error>"},
    {GSERROR_NOT_IMPLEMENT,         "<501 not implement>"},
    {GSERROR_NOT_SUPPORT,           "<501 not support>"},
    {GSERROR_BINDER,                "<504 binder occur error>"},
};

static inline std::string GSErrorStr(GSError err)
{
    auto it = GSErrorStrs.find(err);
    if (it == GSErrorStrs.end()) {
        return "<GSError error index out of range>";
    }
    return it->second;
}

enum WMError {
    WM_OK = GSERROR_OK,
    WM_ERROR_SAMGR = GSERROR_CONNOT_CONNECT_SAMGR,
    WM_ERROR_WMS_NOT_FOUND = GSERROR_CONNOT_CONNECT_SERVER,
    WM_ERROR_NOT_INIT = GSERROR_NOT_INIT,
    WM_ERROR_API_FAILED = GSERROR_API_FAILED,
    WM_ERROR_NEW = GSERROR_NO_MEM,
    WM_ERROR_INNER = GSERROR_INTERNEL,
    WM_ERROR_NULLPTR = GSERROR_INVALID_ARGUMENTS,
    WM_ERROR_INVALID_PARAM = GSERROR_INVALID_ARGUMENTS,
    WM_ERROR_CONNOT_CONNECT_WESTON = GSERROR_CONNOT_CONNECT_WESTON,
    WM_ERROR_SERVER = GSERROR_SERVER_ERROR,
    WM_ERROR_NOT_SUPPORT = GSERROR_NOT_SUPPORT,
    WM_ERROR_DESTROYED_OBJECT = GSERROR_DESTROYED_OBJECT,
};

static inline std::string WMErrorStr(WMError err)
{
    auto it = GSErrorStrs.find(static_cast<GSError>(err));
    if (it == GSErrorStrs.end()) {
        return "<WMError error index out of range>";
    }
    return it->second;
}

enum SurfaceError {
    SURFACE_ERROR_OK = GSERROR_OK,
    SURFACE_ERROR_ERROR = GSERROR_INTERNEL,
    SURFACE_ERROR_BINDER_ERROR = GSERROR_BINDER,
    SURFACE_ERROR_NULLPTR = GSERROR_INVALID_ARGUMENTS,
    SURFACE_ERROR_NO_ENTRY = GSERROR_NO_ENTRY,
    SURFACE_ERROR_INVALID_OPERATING = GSERROR_INVALID_OPERATING,
    SURFACE_ERROR_NO_BUFFER = GSERROR_NO_BUFFER,
    SURFACE_ERROR_INVALID_PARAM = GSERROR_INVALID_ARGUMENTS,
    SURFACE_ERROR_INIT = GSERROR_INTERNEL,
    SURFACE_ERROR_NOMEM = GSERROR_NO_MEM,
    SURFACE_ERROR_API_FAILED = GSERROR_API_FAILED,
    SURFACE_ERROR_NOT_SUPPORT = GSERROR_NOT_SUPPORT,
    SURFACE_ERROR_OUT_OF_RANGE = GSERROR_OUT_OF_RANGE,
    SURFACE_ERROR_TYPE_ERROR = GSERROR_TYPE_ERROR,
    SURFACE_ERROR_NO_CONSUMER = GSERROR_NO_CONSUMER,
};

static inline std::string SurfaceErrorStr(SurfaceError err)
{
    auto it = GSErrorStrs.find(static_cast<GSError>(err));
    if (it == GSErrorStrs.end()) {
        return "<SurfaceError error index out of range>";
    }
    return it->second;
}

enum VsyncError {
    VSYNC_ERROR_OK = GSERROR_OK,
    VSYNC_ERROR_API_FAILED = GSERROR_API_FAILED,
    VSYNC_ERROR_INVALID_OPERATING = GSERROR_INVALID_OPERATING,
    VSYNC_ERROR_NULLPTR = GSERROR_INVALID_ARGUMENTS,
    VSYNC_ERROR_BINDER_ERROR = GSERROR_BINDER,
    VSYNC_ERROR_SAMGR = GSERROR_CONNOT_CONNECT_SAMGR,
    VSYNC_ERROR_SERVICE_NOT_FOUND = GSERROR_SERVER_ERROR,
    VSYNC_ERROR_PROXY_NOT_INCLUDE = GSERROR_PROXY_NOT_INCLUDE,
    VSYNC_ERROR_INNER = GSERROR_INTERNEL,
    VSYNC_ERROR_INVALID_ARGUMENTS = GSERROR_INVALID_ARGUMENTS,
};

static inline std::string VsyncErrorStr(VsyncError err)
{
    auto it = GSErrorStrs.find(static_cast<GSError>(err));
    if (it == GSErrorStrs.end()) {
        return "<VsyncError error index out of range>";
    }
    return it->second;
}
} // namespace OHOS

#endif // INTERFACES_INNERKITS_COMMON_GRAPHIC_COMMON_H
