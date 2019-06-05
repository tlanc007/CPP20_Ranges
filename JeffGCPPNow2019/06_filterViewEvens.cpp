/*
 06_filterViewEvens.cpp
 Using filter view to get the evens out of range
 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{
    std::vector<int> vi{ 0, 1, 2, 3, 4, 5, 6 };

    auto is_even = [](int i) { return 0 == i % 2; };

    for (int i : vi | view::filter (is_even) )
    {
        std::cout << i << " "; //0 2 4 6
    }
    std::cout << "\n";
}
