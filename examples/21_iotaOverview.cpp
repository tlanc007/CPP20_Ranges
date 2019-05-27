/*
 21_iotaOverview.cpp
 introduction to iota
 */

#include <iostream>
#include <ranges>

#include "rangeNamespace.hpp"

int main ()
{
    // range.iota.overview iota_view generates a sequence of elements
    // by repeatedly incrementing an initial value.
    for (int i : rng::iota_view{1, 5})
    {
        std::cout << i << " "; //1 2 3 4
    }
    std::cout << "\n";
}
