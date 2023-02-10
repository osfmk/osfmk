cmake_minimum_required(VERSION 3.20)

project(osfmk)

# enable_language(CXX ASM)

find_package(LLVM REQUIRED CONFIG)
find_package(Clang REQUIRED)

include(AddLLVM)

message("LLVM STATUS:
  Definitions ${LLVM_DEFINITIONS}
  Includes    ${LLVM_INCLUDE_DIRS}
              ${CLANG_INCLUDE_DIRS}
  Libraries   ${LLVM_LIBRARY_DIRS}"
)

# Now set the LLVM header and library paths:
include_directories(SYSTEM ${LLVM_INCLUDE_DIRS} ${CLANG_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_llvm_library(Attribute MODULE tools/Attribute.cpp PLUGIN_TOOL clang)
add_llvm_library(PrintFunctionNames MODULE tools/PrintFunctionNames.cpp PLUGIN_TOOL clang)