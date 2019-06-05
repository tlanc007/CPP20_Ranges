/*
 23_stringJoin.cpp

 */

#include <iostream>
#include <ranges>
#include <string>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main()
{
    std::vector<std::string> vs{"hello", " ", "ranges", "!"};

    // range.join.overview join_view flattens a View of
    // ranges into a View
    for ( char ch : rng::join_view{vs} ) {
        std::cout << ch; // hello ranges!
    }
    std::cout << '\n';

}
