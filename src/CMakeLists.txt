find_package(PkgConfig REQUIRED)

pkg_check_modules(NETLOGGING netlogging>=0.1.0)
pkg_check_modules(LIBEVENT libevent>=2.1.8)
pkg_check_modules(LIBCONFIG libconfig>=1.5)

add_executable(datatypes ./src/datatypes.c)
target_compile_options(datatypes PRIVATE -Wall -Wextra)
target_include_directories(datatypes PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
install(TARGETS datatypes RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
