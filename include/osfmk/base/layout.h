// Copyright (c) 2023 the osfmk project authors.
// osfmk is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan PSL v2.
// You may obtain a copy of Mulan PSL v2 at:
//          http://license.coscl.org.cn/MulanPSL2
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE. See the Mulan PSL v2 for more
// details.

#pragma once

#define offsetof(clz, field) __builtin_offsetof(clz, field)

namespace osfmk {

class MyTest {
private:
  int a;
  long b;

void test() {
    constexpr auto a = offsetof(MyTest, b);
}
};

}