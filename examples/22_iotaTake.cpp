/*
 22_iotaTake.cpp

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main()
{
    std::vector<int> vi {0, 1, 2, 3, 4, 5};

    // range.take.overview
    // take_view produces a View of the first N elements from another View,
    // or all the elements if the adapted View contains fewer than N.
    {
        rng::take_view tv{vi, 2};
        std::cout << view::all (tv); // [0,1]
        std::cout << "\n";
    }
    {
        auto tv = rng::take_view{vi, 2}; //construct via assignment
        std::cout << view::all (tv); // [0,1]
        std::cout << "\n";
    }
    {
        rng::take_view tv{vi, 10}; //10 is greater then vi.size()
        std::cout << view::all (tv); // [0,1,2,3,4,5]
        std::cout << "\n";
    }

}

