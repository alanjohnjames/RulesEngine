cmake_minimum_required(VERSION 3.10)
project(RulesEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add Catch2
find_package(Catch2 REQUIRED)
include_directories(${CATCH_INCLUDE_DIRS})

# message(STATUS "*******CATCH_INCLUDE_DIRS: ${CATCH_INCLUDE_DIRS}")

# Add source files
add_library(rules_engine_lib SHARED
            bond.hpp
            rules_engine.cpp
            rules_engine.hpp
)

# Add main executable
add_executable(rules_engine
               main.cpp
)
target_link_libraries(rules_engine PRIVATE rules_engine_lib)
set_target_properties(rules_engine PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

# Add Catch2 test executable
add_executable(test_catch2
               test_catch2.cpp
)
target_link_libraries(test_catch2 rules_engine_lib Catch2::Catch2WithMain)
set_target_properties(test_catch2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})


include(CTest)
include(Catch)
catch_discover_tests(test_catch2)
