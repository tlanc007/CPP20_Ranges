/*
    for_each on a sequence of containers
    https://ericniebler.github.io/range-v3/
*/

#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <queue>
#include <ranges>
#include <stack>
#include <vector>

#include "rangeNamespace.hpp"

auto print = [](int i) { std::cout << i << ' '; };

int main()
{
    std::cout << "vector:   ";
    std::vector<int> v{1, 2, 3, 4, 5, 6};
    rng::for_each(v, print); // 1 2 3 4 5 6
    std::cout << "\narray:    ";
    std::array<int, 6> a{1, 2, 3, 4, 5, 6};
    rng::for_each(a, print);
    std::cout << "\nlist:     ";
    std::list<int> ll{1, 2, 3, 4, 5, 6};
    rng::for_each(ll, print);
    std::cout << "\nfwd_list: ";
    std::forward_list<int> fl{1, 2, 3, 4, 5, 6};
    rng::for_each(fl, print);
    std::cout << "\ndeque:    ";
    std::deque<int> d{1, 2, 3, 4, 5, 6};
    rng::for_each(d, print);
    std::cout << '\n';

    /***
     output: 
     vector:   1 2 3 4 5 6
     array:    1 2 3 4 5 6
     list:     1 2 3 4 5 6
     fwd_list: 1 2 3 4 5 6
     deque:    1 2 3 4 5 6
    ***/

}