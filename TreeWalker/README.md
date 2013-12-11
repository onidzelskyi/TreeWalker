main.cpp - main source file
input.txt - data file for test, must be reside in one directory with the executable
README.md - this file

That sample code not contain any error checking

Comppile with:
    g++ main.cpp -o sample

Memory usage: n*sizeof(node) + d*sizeof(node) (number of nodes + stack)
Time: O(n) in worst case