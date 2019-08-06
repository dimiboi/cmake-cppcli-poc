cmake_minimum_required(VERSION 3.13)

set(target_name libreverse)

add_library(${target_name} STATIC
	"include/reverser.h"
	"reverser.cpp")

target_include_directories(${target_name} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
