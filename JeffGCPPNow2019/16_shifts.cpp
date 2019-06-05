/*
 16_shifts.cpp
 Not in 20 yet. Won't compile yet
 */

#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main() {

    std::vector<int> vi { 1, 2, 3, 4, 5 };

    auto itr { std::shift_left(vi.begin(), vi.end(), 2) };
    //vi = 3 4 5 4 5
    //           ^
    //          itr
    vi.erase( itr, vi.end());

    std::cout << view::all (vi);
    std::cout << "\n";
    //3 4 5

}
