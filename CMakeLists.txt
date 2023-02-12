# Global
cmake_minimum_required(VERSION 3.5)

project(AutonomousTrucking VERSION 0.01
                  DESCRIPTION "A simulation for optimized truck transport control"
                  LANGUAGES CXX)
                  
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Download during configuration (Catch2)
include(FetchContent)

# Subdirectories
add_subdirectory(src)
add_subdirectory(app)

# Testing
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(test)
    enable_testing ()
    add_test(NAME testroad COMMAND testroad)
endif()

