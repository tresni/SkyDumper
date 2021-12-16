cmake_minimum_required(VERSION 3.5)

project(SkyDumper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(libusb-1.0 REQUIRED)
find_package(HIDAPI REQUIRED)

include_directories(include ${LIBUSB_1_INCLUDE_DIR} ${HIDAPI_INCLUDE_DIR})
set(SOURCE_FILES main.cpp skylander.cpp include/skylander.h portalio.cpp include/portalio.h)

add_executable(SkyDumper ${SOURCE_FILES})
target_link_libraries(SkyDumper ${LIBUSB_1_LIBRARIES} ${HIDAPI_LIBRARIES})
