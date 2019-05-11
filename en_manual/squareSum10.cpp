
#include <range/v3/all.hpp> // get everything

#include "rangeNamespace.hpp"
#include "printUtil.hpp"


int main ()
{
    namespace view = std::view;
    int sum = rng::accumulate(view::ints(1, rng::unreachable)
                       | view::transform([](int i){return i*i;})
                       | view::take(10), 0);

    std::cout << "sum of accumulate: " << sum << "\n";

}