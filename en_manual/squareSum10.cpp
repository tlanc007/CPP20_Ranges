
#include <range/v3/all.hpp> // get everything

#include "printUtil.hpp"

int main ()
{

    //using namespace ranges;
    namespace rng = ranges;

    int sum = rng::accumulate(rng::view::ints(1, rng::unreachable)
                       | rng::view::transform([](int i){return i*i;})
                       | rng::view::take(10), 0);

    std::cout << "sum of accumulate: " << sum << "\n";

}