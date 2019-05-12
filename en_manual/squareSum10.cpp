
#include <ranges>

#include "rangeNamespace.hpp"
#include "printUtil.hpp"

namespace view = std::view;

int main ()
{
    int sum = rng::accumulate(view::ints(1, rng::unreachable)
                       | view::transform([](int i){return i*i;})
                       | view::take(10), 0);

    std::cout << "sum of accumulate: " << sum << "\n";

}