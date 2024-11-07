target_sources(class66-controller PRIVATE class66-controller.cpp)

add_subdirectory(can)
add_subdirectory(display)
target_link_libraries(class66-controller mcp2515)