#!/bin/bash


if [ "$#" -eq 0 ]
then
        make
else
        for arg in "$@"
        do
                echo
                echo "Executing $arg"

                if [ "$arg" == "-t=arm" ]
                then
                        # Check to see if arm-none-eabi toolchain is installed
                        hash arm-none-eabi-gcc 2>/dev/null || {
                                echo >&2 "I require arm-none-eabi toolchain to build for arm target, but it's not installed.  Aborting."
                                echo
                                continue
                        }
                        make PREFIX=arm-none-eabi-

                elif [ "$arg" == "--clean" ]
                then
                        make clean

                elif [ "$arg" == "--test" ]
                then
                        echo "Running tests in linux target, running test in arm not supported."
                        make
                        cd Tests
                        make tests
                        cd ..
                else
                        echo "Unsupported Command $arg"
                fi
        done
fi
