/*
    counting elements that match
    https://ericniebler.github.io/range-v3/
*/

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;
namespace action = rng::action;

int main()
{
    std::vector<int> v{6, 2, 3, 4, 5, 6};
    // note the count return is a numeric type
    // like int or long -- auto below make sure
    // it matches the implementation
    auto c = rng::count(v, 6);
    std::cout << "vector:   " << c << '\n';
    std::array<int, 6> a{6, 2, 3, 4, 5, 6};
    c = rng::count(a, 6);
    std::cout << "array:    " << c << '\n';

    /* 
    output

    vector:   2
    array:    2
    */
}