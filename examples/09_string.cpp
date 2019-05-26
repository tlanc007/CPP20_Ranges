/*
 09_string.cpp
 strings are ranges, too

 */

#include <iostream>
#include <ranges>
#include <string>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main ()
{
    std::string s { "hello" };
    //output: h e l l o
    rng::for_each( s, [](char c){ std::cout << c << " "; } );
    std::cout << '\n';

}
