/*
    Generate a sequence on the fly with range comprehension and initialize a vector with it.
    https://ericniebler.github.io/range-v3/
*/

#include <ranges>

#include "rangeNamespace.hpp"

namespace view = std::view;

int main ()
{
    std::vector<int> vi =
        view::for_each(view::ints(1,10), [](int i){
            return rng::yield_from(view::repeat_n(i,i));
        });

    std::cout << rng::view::all (vi);
    std::cout << "\n";
    // vi == {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,...}
}
