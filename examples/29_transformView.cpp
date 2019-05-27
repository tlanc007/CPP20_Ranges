/*
 29_transformView.cpp

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

int main()
{
    //using cmcstl2 this is successful (compile errors with range v3)
    std::vector<int> vi{ 0, 1, 2, 3, 4, 5 };

    rng::transform_view times_ten{ vi, [](int i) { return i * 10; } };

    for (int i : times_ten)
    {
        std::cout << i << " ";  // 0 10 20 30 40 50
    }
    std::cout << "\n";
}
