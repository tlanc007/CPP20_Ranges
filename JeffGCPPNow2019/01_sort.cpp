/*
 01_sort.cpp

 old way to sort:
 std::array<int, 6> a { 6, 2, 3, 4, 5, 1 };
 std::sort ( a.begin(), a.end() );

 */

#include <array>
#include <iostream>
#include <ranges>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{

    std::array<int, 6> a { 6, 2, 3, 4, 5, 1 };
    rng::sort ( a ); //clear, obvious meaning, -13 characters

    std::cout << view::all (a);
    std::cout << '\n';
}
