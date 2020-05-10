cmake_minimum_required( VERSION 3.17 FATAL_ERROR )
set( CMAKE_CXX_STANDARD 17 )

include("hunter/HunterVersion.cmake")
project( install_hunter VERSION 0.1.0 LANGUAGES CXX DESCRIPTION "Hello, Hunter!" )

hunter_add_package(fmt)

find_package(fmt REQUIRED)

add_executable( main main.cxx )
target_link_libraries(main PRIVATE fmt::fmt)