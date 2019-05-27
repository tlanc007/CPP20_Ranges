
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
add_exe(13_minmax 13_minmax.cpp)
add_exe(14_minmaxElement 14_minmaxElement.cpp)
add_exe(15_copyIf 15_copyIf.cpp)
#add_exe(16_shifts 16_shifts.cpp) #doesn't compile not in 20 yet
add_exe(17_filterTransform 17_filterTransform.cpp)
add_exe(18_filterTransformTrace 18_filterTransformTrace.cpp)
#add_exe(20_spanReverse 20_spanReverse.cpp) # need std::span support
add_exe(21_iotaOverview 21_iotaOverview.cpp)
add_exe(22_iotaTake 22_iotaTake.cpp)
add_exe(23_stringJoin 23_stringJoin.cpp)
add_exe(24_emptyVew 24_emptyVew.cpp)
add_exe(25_singleView 25_singleView.cpp)
add_exe(26_splitView 26_splitView.cpp)
add_exe(27_reverseView 27_reverseView.cpp)

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

