cmake_minimum_required(VERSION 3.11)

project(RangeLearn CXX)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fconcepts")

include(FetchContent)
# range-v3
include(CMake/includeRange.cmake)


function(add_exe EXENAME FIRSTSOURCE)
    add_executable (${EXENAME} ${FIRSTSOURCE} ${ARGN})
    target_link_libraries(${EXENAME} range-v3 fmt)
    target_include_directories(${EXENAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
endfunction(add_exe)

#add_subdirectory(try)
add_subdirectory(en_manual)
add_subdirectory(JeffGCPPNow2019)
