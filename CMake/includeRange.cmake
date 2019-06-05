FetchContent_Declare(
    Range
    GIT_REPOSITORY https://github.com/ericniebler/range-v3.git
    #GIT_TAG origin/v1.0-beta
    GIT_TAG origin/master
    LOG_DOWNLOAD ON
)

FetchContent_GetProperties(Range)
if (NOT range_POPULATED)
    FetchContent_Populate (Range)
    message(STATUS "range source dir: ${range_SOURCE_DIR}" )
    message(STATUS "range binary dir: ${range_BINARY_DIR}" )
    add_subdirectory (${range_SOURCE_DIR} ${range_BINARY_DIR} )
    #add_subdirectory (${range_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR} )

endif()

