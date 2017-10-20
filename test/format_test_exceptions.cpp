// ------------------------------------------------------------------------------
// format_test_exceptions.cpp : exception handling
// ------------------------------------------------------------------------------

//  Copyright 2017 James E. King, III - Use, modification, and distribution are
//  subject to the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// see http://www.boost.org/libs/format for library home page

// ------------------------------------------------------------------------------

#define BOOST_FORMAT_STATIC_STREAM
#include "boost/format.hpp"

#include <iostream> 
#include <iomanip>

#define BOOST_INCLUDE_MAIN 
#include <boost/test/test_tools.hpp>

int test_main(int, char* [])
{
    // https://svn.boost.org/trac10/ticket/8735

    BOOST_CHECK_THROW((boost::format("%0%") % 1), boost::io::bad_format_string);
    BOOST_CHECK_THROW((boost::format("%1%") % 1 % 2), boost::io::too_many_args);
    BOOST_CHECK_THROW((boost::format("%1% %2%") % 1).str(), boost::io::too_few_args);

    return 0;
}

