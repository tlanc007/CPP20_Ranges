/*
    count element of range that matches predicate
    https://ericniebler.github.io/range-v3/
*/

#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

auto is_six = [](int i) -> bool { return i == 6; };

int main()
{
    std::cout << "vector:   ";
    std::vector<int> v{6, 2, 6, 4, 6, 1};
    {
        auto i {rng::find(v, 6) }; // 1 2 3 4 5 6
        std::cout << "*i: " << *i << '\n';
    }

    {
        auto i {rng::find(v, 10) }; // 1 2 3 4 5 6
        if (i == rng::end(v))
        {
            std::cout << "didn't find 10\n";
        }
    }

    {
        auto i {rng::find_if(v, is_six) };
        if (i != rng::end(v))
        {
            std::cout << "*i: " << *i << '\n';
        }
    }

    {
        auto i {rng::find_if_not(v, is_six) };
        if(i != rng::end(v))
        {
            std::cout << "*i: " << *i << '\n';
        }
    }

    {
        auto i {rng::find(v, 6) };
        i++;
        if(i != rng::end(v))
        {
            std::cout << "*i after ++ (2 expected): " << *i;
        }
    }

    std::cout << "\narray:    ";
    std::array<int, 6> a{6, 2, 3, 4, 5, 1};
    {
        auto i {rng::find(a, 6) };
        if(i != rng::end(a))
        {
            std::cout << "*i: " << *i;
        }
    }

    std::cout << "\nlist:     ";
    std::list<int> li{6, 2, 3, 4, 5, 1};
    {
        auto i {rng::find(li, 6) };
        if(i != rng::end(li))
        {
            std::cout << "*i: " << *i;
        }
    }

    std::cout << "\nfwd_list: ";
    std::forward_list<int> fl{6, 2, 3, 4, 5, 1};
    {
        auto i {rng::find(fl, 4) };
        if(i != rng::end(fl))
        {
            std::cout << "*i: " << *i;
        }
    }

    std::cout << "\ndeque:    ";
    std::deque<int> d{6, 2, 3, 4, 5, 1};
    {
        auto i {rng::find(d, 6) };
        if(i != rng::end(d))
        {
            std::cout << "*i: " << *i;
        }
    }
    std::cout << '\n';

    /***
    output

    vector:   *i: 6
    didn't find 10
    *i: 6
    *i: 2
    *i after ++ (2 expected): 2
    array:    *i: 6
    list:     *i: 6
    fwd_list: *i: 4
    deque:    *i: 6
    ***/
}