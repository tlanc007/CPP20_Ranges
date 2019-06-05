/*
 11_findIf.cpp
 use find_if

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{
    auto is_six = [](int i) -> bool { return i == 6; };

    std::vector<int> v { 6, 2, 3, 4, 5, 6 };

    auto i = rng::find_if( v, is_six );

    if (i != rng::end(v) ) {
        std::cout << "i: " << *i << '\n';
    }


}
