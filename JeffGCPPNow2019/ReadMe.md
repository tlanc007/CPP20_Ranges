V1.0: 2019-06-05

# Description
The following are examples from Jeff Garland's Range presentation at CppNow-2019.  

In the interests of forward compatibility with C++20, I tried to make references to Ranges using the C++20 namespace.

# Issues
There were files that I couldn't get to compile without making some modifications.  Originally, I was using the v1.0-beta branch from Eric's [range-v3 library](https://github.com/ericniebler/range-v3).  Since then the master branch has been getting updates and some of the workarounds may not be needed.

# Compiler
I have been using GCC 8 and GCC 9 with the -fconcepts flag.