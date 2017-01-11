set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb -pedantic -Wall")
set(CMAKE_MODULE_PATH "../cmake")

set(SOURCE_FILES main.cpp)
add_executable(code_test ${SOURCE_FILES})