/*
 10_coundIsSorted.cpp
 perform count and check if is_sorted

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main ()
{

    std::vector<int> v { 6, 2, 3, 4, 5, 6 };
    int c = rng::count( v, 6 ); // c == 2
    std::cout << "c " << c << '\n';

    rng::sort (v);
    if (rng::is_sorted( v ) )
    {
        std::cout << "true\n";
    }
    else { std::cout << " not sorted\n"; }
}
