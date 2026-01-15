cmake_minimum_required(VERSION 3.16)
project(MyGame C)

set(CMAKE_C_STANDARD 11)

# include directory di client
include_directories(${CMAKE_SOURCE_DIR}/src/client/include)
include_directories(/usr/local/include)  # Raylib headers

# lista dei sorgenti
file(GLOB CLIENT_SOURCES "${CMAKE_SOURCE_DIR}/src/client/*.c")

# crea l'eseguibile
add_executable(client_build ${CLIENT_SOURCES})

# link manuale a Raylib
find_library(RAYLIB_LIB raylib PATHS /usr/local/lib)
target_link_libraries(client_build PRIVATE ${RAYLIB_LIB} m dl pthread)

set_target_properties(client_build PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)