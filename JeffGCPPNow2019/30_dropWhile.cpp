/*
 30_dropWhile.cpp

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main()
{
    std::vector<int> v { 6, 2, 3, 4, 5, 6 , 7 };

    auto is_even = [](int i) { return i % 2 == 0; };
    auto print   = [](int i) { std::cout << i << " "; };

    auto after_leading_evens {
        view::drop_while(view::all(v), is_even) |
        view::take(2)
    };

    //execute
    rng::for_each(after_leading_evens, print);  //prints-> 3 4

    std::cout << "\n";
}
