project(opencv_test)
cmake_minimum_required(VERSION 3.0)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB SOURCES *.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${CONAN_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})