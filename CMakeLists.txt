cmake_minimum_required(VERSION 3.18.4)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

project(SparkEngine)

add_subdirectory(src/${PROJECT_NAME}/Window)
add_subdirectory(src/${PROJECT_NAME}/Engine)

add_subdirectory(doc)