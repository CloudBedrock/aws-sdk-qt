# AWS SDK for Qt Code Generator
[![Build Status](https://img.shields.io/travis/pcolby/aws-sdk-qt/master.svg "Linux (Travis CI)")](https://travis-ci.org/pcolby/aws-sdk-qt)
[![Build Status](https://img.shields.io/appveyor/ci/pcolby/aws-sdk-qt/master.svg "Windows (AppVeyor)")](https://ci.appveyor.com/project/pcolby/aws-sdk-qt)
[![GPLv3 License](http://img.shields.io/badge/license-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl.html)

This code genenerator is part of the [AWS SDK for Qt] project.  It is a simple application that used
to automate the generation of a number of the [AWS SDK for Qt] classes from a set of API descriptions.

## Requirements

While the [AWS SDK for Qt] aims to support with all versions of Qt from Qt
5.1 onwards, with or without C++11 support, this code generator currently
requires Qt 5.10 or later, which also requires C++11.

But other than a recent version of Qt, and a decent modern C++ compiler, this
code generator has no special requirements.

## License

While the [AWS SDK for Qt] is made available under the [LGPL], this code
generator is released under the [GPL].

The [API descriptions](descriptions) are copied verbatim from the [aws-sdk-cpp](
https://github.com/aws/aws-sdk-cpp/tree/master/code-generation/api-descriptions)
project, which provides those descriptions under the [ASL].

[ASL]: http://www.apache.org/licenses/LICENSE-2.0 "Apache License"
[AWS SDK for Qt]: https://github.com/pcolby/aws-sdk-qt
[GPL]: https://www.gnu.org/licenses/gpl.html "GNU General Public License"
[LGPL]:https://www.gnu.org/licenses/lgpl.html "GNU Lesser General Public License"
