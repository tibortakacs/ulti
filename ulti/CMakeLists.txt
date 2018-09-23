cmake_minimum_required (VERSION 3.1.0)
project (ulti)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -Werror -pthread")

add_library(ulti SHARED
    src/card.cpp
    src/dealer.cpp)

target_include_directories(ulti
    PUBLIC include)

if (${CMAKE_TESTING_ENABLED})
    find_package(GTest REQUIRED)

    add_executable(ulti_unit_test
        test/unit/dealer_test.cpp)

    message(${GTEST_INCLUDE_DIRS})

    target_include_directories(ulti_unit_test
        PRIVATE ${GTEST_INCLUDE_DIRS}
        PRIVATE src)

    target_link_libraries(ulti_unit_test
        ulti
        ${GTEST_BOTH_LIBRARIES})
endif()
