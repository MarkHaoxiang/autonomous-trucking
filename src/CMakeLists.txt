
find_package(Threads REQUIRED)

message(STATUS "Using gRPC, protobuf and json via add_subdirectory (FetchContent).")

include(FetchContent)

# Fetching gRPC (includes Protobuf) 
FetchContent_Declare(
        grpc
        GIT_REPOSITORY https://github.com/grpc/grpc.git
        GIT_TAG        v1.52.0)
FetchContent_MakeAvailable(grpc)




set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_REFLECTION grpc++_reflection)
set(_PROTOBUF_PROTOC $<TARGET_FILE:protoc>)
set(_GRPC_GRPCPP grpc++)


add_library(
        simulation
        point2d.h
        realm.h
        road.h
        truck.h
        truckcontainer.h
        realm.cpp
        point2d.cpp
        road.cpp
        truck.cpp
        truckcontainer.cpp
)
