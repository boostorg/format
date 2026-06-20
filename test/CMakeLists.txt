cmake_minimum_required(VERSION 3.8...3.20)

add_executable(format_test1 format_test1.cpp)
target_link_libraries(format_test1 Boost::format)

add_executable(format_test2 format_test2.cpp)
target_link_libraries(format_test2 Boost::format)

add_executable(format_test3 format_test3.cpp)
target_link_libraries(format_test3 Boost::format)

add_executable(format_test_enum format_test_enum.cpp)
target_link_libraries(format_test_enum Boost::format)

add_executable(format_test_exceptions format_test_exceptions.cpp)
target_link_libraries(format_test_exceptions Boost::format)

add_executable(format_test_wstring format_test_wstring.cpp)
target_link_libraries(format_test_wstring Boost::format)
