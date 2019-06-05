/*
 27_reverseView

 */

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"


int main()
{

    std::vector<int> vi {0, 1, 2, 3, 4, 5};

    // range.reverse.overview
    //  reverse_view takes a bidirectional View and produces
    //  another View that iterates the same elements in reverse order.

    for ( int i : rng::reverse_view{vi} ) {
        std::cout << i << " ";    //5 4 3 2 1 0
    }
    std::cout << "\n";

}
