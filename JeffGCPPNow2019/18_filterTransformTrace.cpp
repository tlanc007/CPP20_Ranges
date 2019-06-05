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
    std::vector<int> vec_int{ 0, 1, 2, 3, 4, 5 };

    //annotated
    auto even = [](int i) -> bool {
        std::cout << "ev:" << i << "\n";
        return 0 == i % 2;
    };
    auto square = [](int i) -> int  {
        std::cout << "sq:" << i << " square: " << i*i << "\n";
        return i * i;
    };

    int i {0};
    for (int e : vec_int
         | view::filter(even)
         | view::transform(square)) //how many executions
    {
        std::cout << "for: (" << i << ") vec_int^2: " << e << "\n"; //how many executions?
        ++i;
    }
    /**
     ev:0
     sq:0 square: 0
     for: (0) vec_int^2: 0
     ev:1
     ev:2
     sq:2 square: 4
     for: (1) vec_int^2: 4
     ev:3
     ev:4
     sq:4 square: 16
     for: (2) vec_int^2: 16
     ev:5
     **/
}

