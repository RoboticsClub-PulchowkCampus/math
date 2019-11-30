#!/bin/sh

# Build Static Library in the root folder
cd ../
make
cd Tests/

# Build the test and run it
make run_test
