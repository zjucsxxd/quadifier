cmake_minimum_required(VERSION 2.8)

set( NAME_SRC
interface.c
quadify.c
qtree.c
)

add_executable( quad ${NAME_SRC})

target_link_libraries( quad ${OpenCV_LIBS} )
