/*
    Filter a container using a predicate and transform it

    https://ericniebler.github.io/range-v3/
*/

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{

    std::vector<int> vi{1,2,3,4,5,6,7,8,9,10};
    using namespace ranges;
    auto rng = vi | view::remove_if([](int i){return i % 2 == 1;})
                  | view::transform([](int i){return std::to_string(i);});

    std::cout << rng::view::all (vi);
    std::cout << "\n";
    // rng == {"2","4","6","8","10"};
}
