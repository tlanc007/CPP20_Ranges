
# fmt hack for now, until more modern cmake style
#include_directories (/usr/local/include ${CMAKE_SOURCE_DIR}/extern/ranges/include)
include_directories (/usr/local/include )

link_directories(/usr/local/lib)

add_exe(predicate_remove predicate_remove.cpp)
add_exe(squareSum10 squareSum10.cpp)
add_exe(rangeComprehension rangeComprehension.cpp)
add_exe(mutatingContainerData mutatingContainerData.cpp)
# add_exe(customRangesFacade customRangesFacade.cpp) not part of 20
add_exe(adaptorUnary adaptorUnary.cpp)
# add_exe(customIteratorRandomAccess customIteratorRandomAccess.cpp) doesn't compile
add_exe(hello hello.cpp)
add_exe(anyAllNoneOf anyAllNoneOf.cpp)
add_exe(count count.cpp)