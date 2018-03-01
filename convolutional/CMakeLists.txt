project(convolutional)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS "-frounding-math")
set(CMAKE_CXX_FLAGS "-frounding-math")
SET(CMAKE_CXX_FLAGS "-w -std=c++11 -O3")
find_package( OpenCV REQUIRED )
set(SRCS
	main.cpp
)
add_executable(convolutional ${SRCS})
target_link_libraries(convolutional ${OpenCV_LIBS})
