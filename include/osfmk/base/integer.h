// Copyright (c) 2023 the osfmk project authors.
// osfmk is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan PSL v2.
// You may obtain a copy of Mulan PSL v2 at:
//          http://license.coscl.org.cn/MulanPSL2
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE. See the Mulan PSL v2 for more
// details.

#pragma once

namespace osfmk {

using int8_t = __INT8_TYPE__;
using uint8_t = __UINT8_TYPE__;
using byte = uint8_t;

using int16_t = __INT16_TYPE__;
using uint16_t = __UINT16_TYPE__;

using int32_t = __INT32_TYPE__;
using uint32_t = __UINT32_TYPE__;

using int64_t = __INT64_TYPE__;
using uint64_t = __UINT64_TYPE__;

using size_t = __SIZE_TYPE__;
using ssize_t = long int;

}  // namespace osfmk
