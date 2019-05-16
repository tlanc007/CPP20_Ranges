/*
    for_each on associative containers
    https://ericniebler.github.io/range-v3/
*/

#include <iostream>
#include <map>
#include <ranges>
#include <stack>
#include <vector>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "rangeNamespace.hpp"

auto print = [](int i) { std::cout << i << ' '; };

// must take a pair for map types
auto printm = [](std::pair<std::string, int> p) {
    std::cout << p.first << ":" << p.second << ' ';
};

int main()
{
    std::cout << "\nset:           ";
    std::set<int> si{1, 2, 3, 4, 5, 6};
    rng::for_each(si, print);
    std::cout << "\nmap:           ";
    std::map<std::string, int> msi{{"one", 1}, {"two", 2}, {"three", 3}};
    rng::for_each(msi, printm);
    std::cout << "\nunordered map: ";
    std::unordered_map<std::string, int> umsi{{"one", 1}, {"two", 2}, {"three", 3}};
    rng::for_each(umsi, printm);
    std::cout << "\nunordered set: ";
    std::unordered_set<int> usi{1, 2, 3, 4, 5, 6};
    rng::for_each(usi, print);
    std::cout << '\n';

    /***
         for_each with associative containers
      output
      set:           1 2 3 4 5 6
      map:           one:1 three:3 two:2
      unordered_map: three:3 one:1 two:2
      unordered_set: 6 5 4 3 2 1
    ***/
}
