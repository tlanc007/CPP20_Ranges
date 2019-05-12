
# fmt hack for now, until more modern cmake style
#include_directories (/usr/local/include ${CMAKE_SOURCE_DIR}/extern/ranges/include)
include_directories (/usr/local/include )

link_directories(/usr/local/lib)

add_exe(predicate_remove predicate_remove.cpp)
add_exe(squareSum10 squareSum10.cpp)