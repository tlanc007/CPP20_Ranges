/*
 17_filterTransform.cpp
 range adaptors
 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main()
{

    //example from standard range.adaptors
    std::vector<int> vec_int { 0, 1, 2, 3, 4, 5 };

    auto even   = [](int i) -> bool { return 0 == i % 2; };
    auto square = [](int i) -> int  { return i * i; };

    for (int i : vec_int
         | view::filter(even)
         | view::transform(square))
    {
        std::cout << i << " "; //0 4 16
    }

    if (rng::equal(
                   vec_int | view::filter(even), //piped collection
                   view::filter(vec_int, even))  //param collection
        )
    {
        std::cout << "\n" << "equal!!\n"; //will execute
    }
}

