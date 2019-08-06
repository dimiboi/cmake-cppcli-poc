cmake_minimum_required(VERSION 3.13)

set(target_name cmake-mixed-mode)

add_executable (${target_name}
	"cmake-mixed-mode.cpp"
	"IReverseService.h"
	"ReverseService.cpp"
	"ReverseService.h")

set_target_properties(${target_name} PROPERTIES COMMON_LANGUAGE_RUNTIME "")

target_link_libraries(${target_name} PRIVATE libreverse)
