/*
 20_spanReverse.cpp
 Need std::span support to work
 */

#include <iostream>
#include <ranges>
#include <span>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

void print_reverse(std::span<int> si) { //by value
    for ( auto i  : rng::reverse_view{si} ) {
        std::cout << i << " " ;
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> vi = { 1, 2, 3, 4, 5 };
    print_reverse( vi ); //5 4 3 2 1

    std::span<int> si { vi };
    print_reverse( si.first(2) ); //2 1
    print_reverse( si.last(2) );  //5 4
}
