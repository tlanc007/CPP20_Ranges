/*
 03_filterView.cpp

 */

#include <array>
#include <iostream>
#include <ranges>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{
    std::array<int, 6> a { 6, 2, 3, 4, 5, 1 };

    auto is_six = [](int i) -> bool { return i == 6; };

    // not sure about rng:filter_view
    //for (int i : rng::filter_view( a, is_six ))
    for (int i: a | view::filter (is_six) )
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
