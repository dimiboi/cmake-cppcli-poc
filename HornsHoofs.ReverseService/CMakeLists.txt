﻿cmake_minimum_required(VERSION 3.13)

set(target_name "HornsHoofs.ReverseService")

add_library(${target_name} SHARED
	"IReverseService.h"
	"ReverseService.cpp"
	"ReverseService.h")

set_target_properties(${target_name} PROPERTIES
    COMMON_LANGUAGE_RUNTIME ""
    DOTNET_TARGET_FRAMEWORK_VERSION "v4.5.2"
    VS_DOTNET_REFERENCES "mscorlib;System;System.Data"
    )

target_link_libraries(${target_name} PRIVATE libreverse)

install(TARGETS ${target_name} DESTINATION "lib/net452")
