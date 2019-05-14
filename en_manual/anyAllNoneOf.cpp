/*
    any_of, all_of, none_of
    https://ericniebler.github.io/range-v3/
*/

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;
namespace action = rng::action;

// Demonstrates any_of, all_of, none_of
// output
// vector: [6,2,3,4,5,6]
// vector any_of is_six: true
// vector all_of is_six: false
// vector none_of is_six: false

auto is_six = [](int i) { return i == 6; };
int main()
{
    std::vector<int> v{6, 2, 3, 4, 5, 6};
    std::cout << std::boolalpha;
    std::cout << "vector: " << rng::view::all(v) << '\n';
    std::cout << "vector any_of is_six: " << rng::any_of(v, is_six) << '\n';
    std::cout << "vector all_of is_six: " << rng::all_of(v, is_six) << '\n';
    std::cout << "vector none_of is_six: " << rng::none_of(v, is_six) << '\n';

    // output
    /*
    vector: [6,2,3,4,5,6]
    vector any_of is_six: true
    vector all_of is_six: false
    vector none_of is_six: false
    */
}
