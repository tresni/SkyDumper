cmake_minimum_required(VERSION 3.5)

project(SkyDumper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(libusb-1.0 REQUIRED)

include_directories(include /usr/local/include)
link_directories(/usr/local/lib)

set(SOURCE_FILES main.cpp skylander.cpp include/skylander.h portalio.cpp include/portalio.h include/hidapi.h)

add_executable(SkyDumper ${SOURCE_FILES})
target_link_libraries(SkyDumper hidapi)
