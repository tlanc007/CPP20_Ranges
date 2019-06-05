/*
 07_for_each_drop_while
 Using filter view; drop the leading evens out of range
 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{
    auto print   = [](int i) { std::cout << i << " "; };
    auto is_even = [](int i) { return i % 2 == 0; };

    std::vector<int> v { 6, 2, 3, 4, 5, 6 };

    //view is defined -- no calculation performed
    auto after_leading_evens = view::drop_while(v, is_even);

    rng::for_each(after_leading_evens, print); //now drive the iteration/calculation
    std::cout << "\n";
    // 3, 4, 5, 6
}
