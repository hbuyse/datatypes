cmake_minimum_required(VERSION 3.0)

# set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_VERBOSE_MAKEFILE off)

# check_include_files
include(CheckIncludeFiles)

# CMAKE_INSTALL_LIBDIR, CMAKE_INSTALL_INCLUDEDIR, CMAKE_INSTALL_DATAROOTDIR
include(GNUInstallDirs)

check_include_files(sys/types.h HAVE_SYS_TYPES_H)

# Executable
include(src/CMakeLists.txt)

# FILE CONFIGURATION
configure_file(${CMAKE_SOURCE_DIR}/config.h.cmake
               ${CMAKE_CURRENT_BINARY_DIR}/config.h)
