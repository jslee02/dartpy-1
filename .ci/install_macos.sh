#!/bin/sh
set -x
# e option is disabled for now

brew tap personalrobotics/tap

brew update > /dev/null

# TODO: the list isn't complete
brew install dartsim
brew install boost
brew install boost-python3
brew install chimera
