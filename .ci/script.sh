#!/bin/sh
set -ex

mkdir build
cd build
if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  cmake .. -DDARTPY_PYTHON_VERSION=$PYTHON_VERSION
fi

if [ "$TRAVIS_OS_NAME" = "linux" ] && [ "$TRAVIS_BRANCH" != "*-binding" ]; then
  make binding
fi

# For test
if [ "$TRAVIS_OS_NAME" = "osx" ]; then
  cmake .. -DDARTPY_PYTHON_VERSION=$PYTHON_VERSION
  if [ "$TRAVIS_BRANCH" != "*-binding" ]; then
    make binding
  fi
fi

# Don't actually build dartpy because the build time exceeds Travis CI time limit.
if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  lscpu
fi
make -j
$SUDO make install

if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  # Run pytest for Python tests of dartpy
  which pytest
  pytest --version
  make pytest

  cd $TRAVIS_BUILD_DIR

  # Install dartpy as package name "dart"
  $SUDO pip3 install -e .
fi
