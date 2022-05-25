#!/bin/sh

set -x

g++ -Wall -Wextra -Werror linkedlists.cpp -o linkedlists.exe
g++ -Wall -Wextra -Werror stack.cpp -o stack.exe
g++ -Wall -Wextra -Werror reverseString.cpp -o reverseString.exe

