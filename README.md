Format, part of collection of the [Boost C++ Libraries](http://github.com/boostorg), provides a type-safe mechanism for formatting arguments according to a printf-like format-string.  User-defined types are supported by providing a regular `std::ostream operator <<` implementation for your types.

### License

Distributed under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).

### Properties

* C++03
* Header-only

### Build Status

Branch          | Travis | Appveyor | Coverity | Coveralls | Regression Tests
--------------- | ------ | -------- | -------- | --------- | ----------------
[develop](https://github.com/boostorg/format/tree/develop) | [![Build Status](https://travis-ci.org/boostorg/uuid.svg?branch=format)](https://travis-ci.org/boostorg/format) | [![Build status](https://ci.appveyor.com/api/projects/status/tkcumf8nu6tb697d/branch/develop?svg=true)](https://ci.appveyor.com/project/boostorg/format/branch/develop) | | N/A (Header-only) | [Enter the Matrix](http://www.boost.org/development/tests/develop/developer/format.html)
[master](https://github.com/boostorg/format/tree/master) | [![Build Status](https://travis-ci.org/boostorg/format.svg?branch=master)](https://travis-ci.org/boostorg/format) | [![Build status](https://ci.appveyor.com/api/projects/status/tkcumf8nu6tb697d?svg=true)](https://ci.appveyor.com/project/boostorg/format/branch/master) | [![Coverity Scan Build Status](https://scan.coverity.com/projects/13982/badge.svg)](https://scan.coverity.com/projects/boostorg-format) | N/A (Header-only) | [Enter the Matrix](http://www.boost.org/development/tests/master/developer/format.html)

### Directories

* **benchmark** - Performance comparison of Boost.Format to printf
* **doc** - Dcumentation
* **examples** - Various use case examples
* **include** - Interface headers of Boost.Format
* **test** - Boost.Format unit tests

### More information

* [Documentation](http://boost.org/libs/format)
* [Ask questions](http://stackoverflow.com/questions/ask?tags=c%2B%2B,boost,boost-format): Be sure to read the documentation first as Boost.Format, like any other string formatting library, has its own rules.
* [Report bugs](https://github.com/boostorg/format/issues): Be sure to mention Boost version, platform and compiler you're using. A small compilable code sample to reproduce the problem is always good as well.
* [Submit Pull Requests](https://github.com/boostorg/format/pulls) against the **develop** branch. Note that by submitting patches you agree to license your modifications under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).  Be sure to include tests proving your changes work properly.
* Discussions about the library are held on the [Boost developers mailing list](http://www.boost.org/community/groups.html#main). Be sure to read the [discussion policy](http://www.boost.org/community/policy.html) before posting and add the `[format]` tag at the beginning of the subject line.

