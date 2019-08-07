cmake_minimum_required(VERSION 3.13)

project("HornsHoofs.ReverseService" VERSION 0.0.1)

add_subdirectory("libreverse")
add_subdirectory("HornsHoofs.ReverseService")

set(CPACK_GENERATOR NuGet)

set(CPACK_PACKAGE_NAME "ReverseService")
set(CPACK_PACKAGE_VENDOR "HornsHoofs")
set(CPACK_PACKAGE_DESCRIPTION "String reverse service implemented as a mixed-mode assembly.")
set(CPACK_PACKAGE_VERSION "${${PROJECT_NAME}_VERSION_MAJOR}.${${PROJECT_NAME}_VERSION_MINOR}.${${PROJECT_NAME}_VERSION_PATCH}-alpha")

include(CPack)