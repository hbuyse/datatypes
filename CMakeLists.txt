cmake_minimum_required(VERSION 3.0)

# set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_VERBOSE_MAKEFILE off)

# check_include_files
include(CheckIncludeFiles)
include(CheckSymbolExists)

# CMAKE_INSTALL_LIBDIR, CMAKE_INSTALL_INCLUDEDIR, CMAKE_INSTALL_DATAROOTDIR
include(GNUInstallDirs)

check_include_files(sys/types.h HAVE_SYS_TYPES_H)

# Check if _GNU_SOURCE is available.
if(NOT DEFINED _GNU_SOURCE)
  check_symbol_exists(__GNU_LIBRARY__ "features.h" _GNU_SOURCE)

  if(NOT _GNU_SOURCE)
    unset(_GNU_SOURCE CACHE)
    check_symbol_exists(_GNU_SOURCE "features.h" _GNU_SOURCE)
  endif()
endif()

# Executable
include(src/CMakeLists.txt)

# FILE CONFIGURATION
configure_file(${CMAKE_SOURCE_DIR}/config.h.cmake
               ${CMAKE_CURRENT_BINARY_DIR}/config.h)
