/*
 02_findIf.cpp

 old way:
 std::array<int, 6> a { 6, 2, 3, 4, 5, 1 };
 ...

 auto is_six = [](int i) -> bool { return i == 6; };

 // so many beginnings and endings
 auto i = std::find_if( v.begin(), v.end(), is_six );
 if (i != std::end( v ) ) {
 cout << "i: " << *i << endl;
 }

 */

#include <array>
#include <iostream>
#include <ranges>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{

    std::array<int, 6> a { 6, 2, 3, 4, 5, 1 };

    auto is_six = [](int i) -> bool { return i == 6; };

    auto i {rng::find_if( a, is_six ) };  //no begin/end
    if (i != rng::end( a ) ) {
        std::cout << "i: " << *i << '\n';
    }
}
