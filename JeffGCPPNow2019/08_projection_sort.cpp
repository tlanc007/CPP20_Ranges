/*
 08_projection_sort.cpp
 sort with projection

 */

#include <iostream>
#include <ranges>
#include <string>
#include <vector>

#include "printUtil.hpp"
#include "rangeNamespace.hpp"

namespace view = std::view;

struct stuff {
    int idx = 0;
    std::string s;
};

std::ostream& operator << (std::ostream& os, const stuff& s)
{
    os << "idx: " << s.idx << " s: " << s.s << ";\t";

    return os;
}

int main ()
{
    std::vector<stuff> vstuff {{2, "foo"}, {1, "bar"}, {0, "baz"}};
    printRng (vstuff);
    rng::sort(vstuff, std::less<>{}, [](auto const& iii) { return iii.idx; });
    printRng (vstuff);

}
