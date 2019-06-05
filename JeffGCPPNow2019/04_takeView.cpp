/*
 04_takeView.cpp

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{
    std::vector<int> vi {0,1,2,3,4,5};
    //not sure this notation is C++20
    //rng::take_view tvi(vi, 5);
    auto tvi {view::take (vi, 5) };
    for (int i : tvi) { std::cout << i << " "; }
    std::cout << '\n';

}
