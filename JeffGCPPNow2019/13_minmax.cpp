/*
 13_minmax.cpp
    min, max, minmax
 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

int main ()
{
    std::vector<int> v { 1, 2, 3, 4, 5, 6 };
    {
        int min_value {rng::min( v ) };
        std::cout << "min: " << min_value << " ";

        int max_value {rng::max( v ) };
        std::cout << "max: " << max_value << "\n";
        // min: 1 max: 6
    }
    {
        //structured bindings...c++17
        auto [min_value, max_value] { rng::minmax( v ) };
        std::cout << "min: " << min_value << " max: " << max_value << "\n";
        // min: 1 max: 6
    }


}
