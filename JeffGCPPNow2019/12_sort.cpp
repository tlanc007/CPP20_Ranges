/*
 12_sort.cpp
 more sorting

 */

#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <ranges>
#include <string_view>

#include "rangeNamespace.hpp"

namespace view = std::view;

void printCont (std::string_view sv, const auto& cont)
{
    std::cout << sv << ": ";
    std::cout << view::all (cont);
    std::cout << '\n';
}

int main ()
{
    std::array<int, 6> arr { 6, 2, 3, 4, 5, 1 };
    printCont ("arr", arr);
    rng::sort ( arr );
    printCont ("arr", arr);

    std::deque<int> d { 6, 2, 3, 4, 5, 1 };
    printCont ("d", d);
    auto reverse_compare = [](int i, int j) { return i > j; };
    rng::sort ( d, reverse_compare ); // 6 5 4 3 2 1
    printCont ("d", d);

    /* can't sort std::list as doesn't meet rng::sort concept
        list isn't a RandomAccessRange

    std::list<int> li { 6, 2, 3, 4, 5, 1 };
    printCont ("li", li);
    rng::sort ( li ); // compile error
    printCont ("li", li);
     */

}
