add_executable(datatypes ./src/datatypes.c)
target_compile_options(datatypes PRIVATE -Wall -Wextra)
target_include_directories(datatypes PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
install(TARGETS datatypes RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
