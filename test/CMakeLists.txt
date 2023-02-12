FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.3.1
)
FetchContent_MakeAvailable(Catch2)

message(STATUS "MY_VARIABLE=${AutonomousTrucking_SOURCE_DIR}")

include_directories (${AutonomousTrucking_SOURCE_DIR}/src)

add_executable(testroad test_road.cpp)

target_link_libraries(testroad
  simulation 
  Catch2::Catch2WithMain)
