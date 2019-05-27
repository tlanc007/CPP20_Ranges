
add_exe(01_sort 01_sort.cpp)
add_exe(02_findIf 02_findIf.cpp)
add_exe(03_filterView 03_filterView.cpp)
add_exe(04_takeView 04_takeView.cpp)
add_exe(06_filterViewEvens 06_filterViewEvens)
add_exe(07_for_each_drop_while 07_for_each_drop_while.cpp)
add_exe(08_projection_sort 08_projection_sort.cpp)
add_exe(09_string 09_string.cpp)
add_exe(10_countIsSorted 10_countIsSorted.cpp)
add_exe(11_findIif 11_findIif.cpp)
add_exe(12_sort 12_sort.cpp)

# Boost dependent examples
# Assuming BOOST_ROOT is defined
set (BOOST_ROOT "$ENV{BOOST_ROOT}" CACHE STRING "Override BOOST_ROOT path")
message("BOOST_ROOT cache: ${BOOST_ROOT}")

if ((${BOOST_ROOT} STREQUAL "") OR (NOT EXISTS ${BOOST_ROOT}) )
    message (FATAL_ERROR "BOOST_ROOT (ENV or -DBOOST_ROOT) must be set to a valid directory")
endif ()

function(add_bst_exe EXENAME FIRSTSOURCE)
    add_executable (${EXENAME} ${FIRSTSOURCE} ${ARGN})
    target_link_libraries(${EXENAME} range-v3 fmt)
    target_include_directories(${EXENAME} PUBLIC ${CMAKE_SOURCE_DIR}/include
        ${BOOST_ROOT}/include)
endfunction(add_bst_exe)

add_bst_exe(05_flatMapReverse 05_flatMapReverse.cpp)

