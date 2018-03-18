#!/bin/bash

BUILDDIR=~/tmp/build/libqtaws-qmake-gcc-qt591

rm -rf head
mkdir head
cp -a "$BUILDDIR/doc/doxygen/api" head/api
cp -a "$BUILDDIR/doc/doxygen/all" head/internal
cp -a "$BUILDDIR/release/unit-test-all-coverage/" head/coverage
