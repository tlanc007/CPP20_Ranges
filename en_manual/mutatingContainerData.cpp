/*
    Mutate container in-place or forward it rhough a chain of mutating operations

    https://ericniebler.github.io/range-v3/
*/

#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"

namespace view = std::view;
namespace action = rng::action;

std::vector <int> read_data ()
{
    std::vector result {10, 5, 10, 5, 3, 20, 7, 15, 19, 12, 16};

    return result;
}

int main ()
{
    // read data into vector, sort it and make it unique
    std::vector <int> vi {read_data () | action::sort | action::unique};
    std::cout << "create vector vi: action sort|unique:\n";
    std::cout << rng::view::all (vi);
    // vi = {3 5 7 10 12 15 16 19 20}

    // do same but with vector already in place
    vi = read_data ();
    vi = std::move (vi) | action::sort | action::unique;
    std::cout << "\n\nsort and unique vector with data already in place:\n";
    std::cout << rng::view::all (vi);
    // vi = {3 5 7 10 12 15 16 19 20}

    // mutate container in place
    vi = read_data ();
    vi |= action::sort | action::unique;
    std::cout << "\n\nsort and unique container in-place:\n";
    std::cout << rng::view::all (vi);
    // vi = {3 5 7 10 12 15 16 19 20}

    // same as above but with function syntax instead of pipe
    vi = read_data ();
    action::unique(action::sort (vi) );
    std::cout << "\n\nusing function syntax:\n";
    std::cout << rng::view::all (vi);
    // vi = {3 5 7 10 12 15 16 19 20}
    std::cout << "\n";
}