cmake_minimum_required(VERSION 3.7)


project(server)


add_executable (
	server
	src/main.cpp
	src/http.cpp
)

target_include_directories(server PUBLIC
	include
) 
