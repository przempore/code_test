set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb -pedantic -Wall")
set(CMAKE_MODULE_PATH "../cmake")

file(GLOB src *.hpp
              *.cpp)

add_library(source ${src})
set(SOURCE_FILES main/main.cpp)
add_executable(code_test ${SOURCE_FILES})
target_link_libraries(code_test source)