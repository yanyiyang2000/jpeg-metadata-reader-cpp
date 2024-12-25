add_executable(
    demo 
    demo.cpp
)

target_link_libraries(
    demo
    PRIVATE
    lynx
)

target_include_directories(
    demo
    PRIVATE
    "${PROJECT_SOURCE_DIR}/include"
)

target_compile_options(
    demo
    PRIVATE
    -O0
    -g3
    -Wall
)

install(
    TARGETS
    demo
    DESTINATION
    ${PROJECT_SOURCE_DIR}/example
)
