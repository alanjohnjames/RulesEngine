cmake_minimum_required(VERSION 3.10)
project(RulesEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(rules_engine_lib SHARED rules_engine.cpp)

add_executable(rules_engine main.cpp)
target_link_libraries(rules_engine PRIVATE rules_engine_lib)
