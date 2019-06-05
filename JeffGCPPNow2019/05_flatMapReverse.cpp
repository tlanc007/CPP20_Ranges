/*
 05_flatMapReverse.cpp
 Uses boost::flat_map using view::reverse

 */

#include <iostream>
#include <ranges>
#include <string>
#include <boost/container/flat_map.hpp>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main()
{
    boost::container::flat_map<std::string, int> fm {};
    fm["world"] = 2;
    fm["hello"] = 1;

    // not sure about reverse_view
    //for ( auto [k, v]  : rng::reverse_view{fm} ) {
    for (auto [k, v]: fm | view::reverse) {
        std::cout << k << ":" << v << "\n" ;
    }
    //world:2
    //hello:1
}
