/*
 28_reverseViewString.cpp

 */

#include <iostream>
#include <ranges>
#include <string>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main()
{

    // range.reverse.overview
    //  reverse_view takes a bidirectional View and produces
    //  another View that iterates the same elements in reverse order.

    std::vector<std::string> vs {"foo", "bar", "baz"};

    for ( std::string s : rng::reverse_view{vs} ) {
        std::cout << s << " ";    //baz bar foo
    }
    std::cout << "\n";

}
