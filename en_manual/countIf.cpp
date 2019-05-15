/*
    count element of range that matches predicate
    https://ericniebler.github.io/range-v3/
*/

#include <array>
#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;
namespace action = rng::action;

auto is_six = [](int i) -> bool { return i == 6; };

int main()
{
    std::vector<int> v{6, 2, 3, 4, 5, 6};
    auto c {rng::count_if(v, is_six) };
    std::cout << "vector:   " << c << '\n';
    std::array<int, 6> a{6, 2, 3, 4, 5, 6};
    c = rng::count_if(a, is_six);
    std::cout << "array:    " << c << '\n';

     /* 
    output

    vector:   2
    array:    2
    */
}