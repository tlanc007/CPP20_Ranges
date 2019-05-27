/*
 14_minmaxElement.cpp

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"


int main ()
{
    std::vector<int> v { 1, 2, 3, 4, 5, 6 };

    {
        //returns an iterator
        auto i {rng::min_element( v ) };
        if (i != v.end()) { //check it
            std::cout << "min element " << *i; //deref the iterator
        }
        std::cout << "\n";
        // min element 1
    }

    {
        //structured bindings...c++17...these are iterators
        auto [min_value, max_value] { rng::minmax_element( v ) };
        std::cout << "min ele: " << *min_value << " max ele: " << *max_value << "\n";
        // min ele: 1 max ele: 6
    }


}
