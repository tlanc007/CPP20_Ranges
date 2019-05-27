/*
 25_singleView.cpp

 */

#include <iostream>
#include <ranges>
#include <string>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main()
{
    //range.single.overview single_view produces a View that
    //contains exactly one element of a specified value.
    rng::single_view svi {42};
    for (int i : svi)
    {
        std::cout << i; // 42
    }

    rng::single_view ssv {std::string {" the answer to everything"} };
    for (std::string s : ssv)
    {
        std::cout << s; // the answer to everything
    }
    std::cout << '\n';
}
