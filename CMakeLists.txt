cmake_minimum_required (VERSION 3.11)
project (zslengine VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add source files to the binary
add_library(zslengine SHARED
	src/engine.cpp
)

# Allow CMake to append version # to filename
set_target_properties(zslengine PROPERTIES VERSION ${PROJECT_VERSION})

# Semantic versioning for previous
set_target_properties(zslengine PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})

# Set external include files
set_target_properties(zslengine PROPERTIES PUBLIC_HEADER "src/*.hpp")

# Set the include directory for the library itself
target_include_directories(zslengine PRIVATE "src")

# Install headers and SOs to system directories
include(GNUInstallDirs)
install(TARGETS zslengine
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
