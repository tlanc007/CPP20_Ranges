/*
    Adapting ranges: takes a view and squares its elements (1 - 20)
    https://ericniebler.github.io/range-v3/
*/

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;

// A class that adapts an existing range with a function
template<class Rng, class Fun>
class transform_view
  : public rng::view_adaptor<transform_view<Rng, Fun>, Rng>
{
    friend rng::range_access;
    rng::semiregular_t<Fun> fun_; // Make Fun model SemiRegular if it doesn't

    class adaptor : public rng::adaptor_base
    {
        rng::semiregular_t<Fun> fun_;
    public:
        adaptor() = default;
        adaptor(rng::semiregular_t<Fun> const &fun) : fun_(fun) {}

        // Here is where we apply Fun to the elements:
        auto read(rng::iterator_t<Rng> it) const -> decltype(fun_(*it))
        {
            return fun_(*it);
        }
    };

    adaptor begin_adaptor() const { return {fun_}; }
    adaptor end_adaptor() const { return {fun_}; }
    
public:
    transform_view() = default;
    transform_view(Rng && rng, Fun fun)
      : transform_view::view_adaptor{std::forward<Rng>(rng)}
      , fun_(std::move(fun))
    {}
};

template<class Rng, class Fun>
transform_view<Rng, Fun> transform(Rng && rng, Fun fun)
{
    return {std::forward<Rng>(rng), std::move(fun)};
}

int main()
{
    auto squares = ::transform(view::ints(1, rng::unreachable), [](int i){return i*i;});
    for(int i : squares | view::take(20))
        std::cout << i << ' ';
    std::cout << '\n';
    // prints 1 4 9 16 25 36 49 64 81 100 121 144 169 196 225 256 289 324 361 400
}
