project(back_projected)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS "-frounding-math")
set(CMAKE_CXX_FLAGS "-frounding-math")

find_package(OpenGL REQUIRED)  
include_directories(${OPENGL_INCLUDE_DIR})  
  
find_package(GLUT REQUIRED)  
include_directories(${GLUT_INCLUDE_DIR})

SET(CMAKE_CXX_FLAGS "-g -Wall")

set(SRCS
	main.cpp
	FileZ.cpp
	model.cpp
	readbmp.cpp
)
set(HDRS
	CommonZ.h
	FileZ.h
	model.h
	readbmp.h
)
add_executable(back_projected ${SRCS} ${HDRS})
target_link_libraries(back_projected ${GLUT_LIBRARY} ${OPENGL_LIBRARY})
