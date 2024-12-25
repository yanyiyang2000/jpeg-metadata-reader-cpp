add_library(
    lynx
    STATIC
    application_segment.cpp
    jfif_segment.cpp
)

target_include_directories(
    lynx
    PUBLIC
    "${PROJECT_SOURCE_DIR}/include"
)

target_compile_options(
    lynx
    PUBLIC
    -O0
    -g3
    -Wall
)
