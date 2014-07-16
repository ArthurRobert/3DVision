CMake_minimum_required(VERSION 2.8)

FIND_PACKAGE (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

INCLUDE_DIRECTORIES (${TEST_SOURCE_DIR}/src
                     ${Boost_INCLUDE_DIRS}
                     )

ADD_DEFINITIONS (-DBOOST_TEST_DYN_LINK)