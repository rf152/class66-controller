cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.0.0)
set(toolchainVersion RISCV_RPI_2_0_0_5)
set(picotoolVersion 2.0.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico2 CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(class66-controller C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1
add_executable(class66-controller)

pico_set_program_name(class66-controller "class66-controller")
pico_set_program_version(class66-controller "0.1")

pico_enable_stdio_uart(class66-controller 1)

add_subdirectory(pico-displayDrivs)
add_subdirectory(pico-mcp2515)
add_subdirectory(src)

target_link_libraries(class66-controller pico_stdlib)


target_include_directories(class66-controller PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
  pico-displayDrivs
  pico-mcp2515
)


pico_add_extra_outputs(class66-controller)

