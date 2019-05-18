#Background
last updated: 5/18/19

*(NOTE: This is still a "Work in Progress".  We are still on the bleeding edge. Things will evolve as we have compilers that fully support C++20.* 

*The reason for this repo, was I was starting to learn ranges, as they applied to C++20 and the first example, I tried hello.cpp from the [Range-v3](https://github.com/ericniebler/range-v3) library and I couldn't get it to compile with GCC-9.  Also there we plenty of* **Range** *examples that worked with the Range library, but not all of those will work for the version of Ranges that are part of C++20)*.


In anticpation of C++20 Ranges, this repository contains a compilation of examples that should work for Ranges as they are defined in C++20.

#Dependency
This repository uses the [Range-v3](https://github.com/ericniebler/range-v3) library, specifically the v1.0-beta branch.  The CMake configuration will pull this down when CMake is run.

# -fconcepts
Although, one can use Ranges without concepts, I feel this is an important part of what Ranges provides and feel that this feature should be taken advantage of in C++20.  This means, for the time being, the only compiler and version that can use concepts is **GCC-8.3**.  Go to the *Compiler Status* section for more information.

#Compiler Status
*(I don't have a MS Compiler so I am not able to provide any first hand information on it.  As such only GNU C++ and Clang++ will be commented on here)*

Via Eric's [Range library](https://github.com/ericniebler/range-v3), we have had access to Ranges for sometime.  In anticipation of Ranges as they are defined for C++20, the following key components are needed, **Ranges** and **Concepts**.  To make full use of these as stated for C++20, to date, there is only one option: GNU C++ 8.3.  This is the only compiler that has functioning Concepts.

Until we have a C++-20 library, I am using [range-v3](https://github.com/ericniebler/range-v3) **branch**: v1.0-beta.

| Compiler | Version | Concepts | Status |
| ---------|---------|----------|--------|
| GNU/G++  | 8.3     | Yes      | Working|
| GNU/G++  | 9.1     | broken   | concepts has issues |
|Clang/llvm|  x      | Not implemented yet       | waiting |

**G++-9**, something happened between 8.3 and 9 that broke some `Concepts` used by Ranges.  Currently G++-9 can be used without the *-fconcepts* options, if one really wanted. An example of the issue with G++-9, is with the en_manual/hello.cpp example:

```
g++ -std=gnu++2a -fconcepts hello.cpp
...
range-v3/include/range/v3/range/concepts.hpp:66:28: internal compiler error: in nothrow_spec_p, at cp/except.c:1247
```

**Clang/LLVM** doesn't have Conepts implemented yet.

#License
While this repo is using the MIT license.  There are examples, that have come from other sources, that may be more restrictive.  In those cases, I have provided links to where they came from and you should consult the specific licensing for those cases.