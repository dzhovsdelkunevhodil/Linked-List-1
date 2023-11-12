cmake_minimum_required(VERSION 3.21.4)

project(TPLab2)

set(SOURCES
	TPLab2/TPLab2.cpp
	TPLab2/Worker.cpp
	TPLab2/Stream.cpp
)

set(HEADERS
	TPLab2/Stream.h
	TPLab2/Keeper.h
	TPLab2/Menu.h
	TPLab2/Worker.h
)

add_executable(TPLab2 ${SOURCES})

target_sources(TPLab2 PRIVATE ${HEADERS})