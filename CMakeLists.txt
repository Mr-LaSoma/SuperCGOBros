cmake_minimum_required(VERSION 3.16)
project(MyGame C)

set(CMAKE_C_STANDARD 11)

# definisci la root del progetto come variabile
set(PROJECT_ROOT "${CMAKE_SOURCE_DIR}" CACHE PATH "Root path of the project")

# passala al codice come macro
add_definitions(-DPROJECT_ROOT_PATH="${PROJECT_ROOT}")


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

add_custom_command(TARGET client_build POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/src/client/assets $<TARGET_FILE_DIR:client_build>/assets
)