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

template <class _Tp, bool _H = false>
class Option;

template <class _Tp>
inline constexpr bool kHasInvalidValue = false;

template <class _Tp>
inline constexpr bool kHasInvalidValue<_Tp*> = true;

template <class _Tp>
class Option<_Tp, true> {
public:
//   static_assert(kHasInvalidValue<_Tp>);
  using ValueType = _Tp;

  inline operator bool() {
    return val != nullptr;
  }
private:
  ValueType val;
};

Option<int*> a;

}