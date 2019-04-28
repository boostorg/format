# Copyright 2019 Sam Day
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
#
# NOTE: CMake support for Boost.format is currently experimental at best
#       and the interface is likely to change in the future

cmake_minimum_required(VERSION 3.5)
project(BoostFormat LANGUAGES CXX)

add_library(boost_format INTERFACE)
add_library(Boost::format ALIAS boost_format)

target_include_directories(boost_format INTERFACE include)

target_link_libraries(boost_format
        INTERFACE
        Boost::assert
        Boost::config
        Boost::core
        Boost::detail
        Boost::optional
        Boost::smart_ptr
        Boost::throw_exception
        Boost::utility
        )
