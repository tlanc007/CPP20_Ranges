/*
 26_splitView.cpp

 */

#include <iostream>
#include <ranges>
#include <string>

#include "rangeNamespace.hpp"

namespace view = std::view;


int main()
{

    std::string answer {"42 the answer to everything"};

    // range.split.overview split_view takes a View and a
    // delimiter, and splits the View into subranges on the
    // delimiter. The delimiter can be a single element or
    // a View of elements.
    rng::split_view words {answer, ' '};

    //return is a ref_view<string>
    for (auto word : words)
    {
        for (char ch : word) //need to break down to elements
        {
            std::cout << ch;
        }
        std::cout << "-";
    }
    std::cout << "\n";
    //42-the-answer-to-everything-

}
