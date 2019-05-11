

function(add_exe EXENAME FIRSTSOURCE)
    add_executable (${EXENAME} ${FIRSTSOURCE} ${ARGN})
    target_link_libraries(${EXENAME} range-v3)
endfunction(add_exe)

add_exe(hello hello.cpp)

#add_executable (range range.cpp)
#target_link_libraries (range range-v3)