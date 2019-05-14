/*
    Hello, for_each
    https://ericniebler.github.io/range-v3/
*/

#include <iostream>
#include <ranges>
#include <string>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;
namespace action = rng::action;

int
main()
{
    std::string s{"hello"};
    // output: h e l l o
    rng::for_each(s, [](char c) { std::cout << c << ' '; });
    std::cout << '\n';

    // h e l l o
}