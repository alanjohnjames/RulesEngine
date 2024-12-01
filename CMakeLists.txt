cmake_minimum_required(VERSION 3.10)
project(RulesEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(rules_engine_lib SHARED
            bond.hpp
            rules_engine.cpp
            rules_engine.hpp
)

add_executable(rules_engine
               main.cpp
)

target_link_libraries(rules_engine PRIVATE rules_engine_lib)

set_target_properties(rules_engine PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
