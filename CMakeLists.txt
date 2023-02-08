# Global
cmake_minimum_required(VERSION 3.5)

project(AutonomousTrucking VERSION 0.01
                  DESCRIPTION "A simulation for optimized truck transport control"
                  LANGUAGES CXX)
                  
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Testing
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()

# Download during configuration (Catch2)
include(FetchContent)

# Subdirectories
add_subdirectory(src)
add_subdirectory(app)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(test)
endif()
