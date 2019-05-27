/*
 24_emptyView.cpp

 */

#include <iostream>
#include <ranges>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main()
{
    // range.empty.overview empty_view produces a View of no elements
    // of a particular type.
    rng::empty_view<float> ev {};
    static_assert(rng::empty(ev));
    static_assert(0 == ev.size());

    for (float f : ev)
    {
        std::cout << "unreached:" << f << '\n';
    }


}
