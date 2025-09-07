cmake_minimum_required(VERSION 4.0.0)

project(pub)

set (BUILD_DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/..)


set(CMAKE_C_FLAGS_DEBUG "-O0 -g3 -Wall -fmessage-length=0")
set(CMAKE_C_FLAGS_RELEASE "-O0 -Wall -fmessage-length=0")

# set(MQTT_LIBS_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../lib)

# include_directories(
# 	${CMAKE_CURRENT_SOURCE_DIR}/../mqtt_includes
# )

# set (SOURCE_LIST pub.c ${CMAKE_CURRENT_SOURCE_DIR}/sub.c)
set (SOURCE_LIST pub.c)

# link_directories(${MQTT_LIBS_PATH})

add_executable(pub ${SOURCE_LIST})

target_link_libraries(pub mosquitto)

install(DIRECTORY DESTINATION ${BUILD_DESTINATION}/bin)
install (TARGETS pub RUNTIME DESTINATION ${BUILD_DESTINATION}/bin)
