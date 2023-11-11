cmake_minimum_required(VERSION 3.21.4)

project(TPLab2)
set(SOURCES
	TPLab2/TPLab2.cpp
	
)

set(HEADERS
	
)

add_executable(TPLab2 ${SOURCES})

target_sources(TPLab2 PRIVATE ${HEADERS})