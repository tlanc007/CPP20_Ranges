
#pragma once

#include <iostream>

#include <range/v3/all.hpp> // get everything

//include <fmt/printf.h>

void printRng (auto rng)
{
    for (const auto& e: rng) {
        std::cout << e << " ";
        //fmt::print ("{} ", e);
    }
    //fmt::print("\n");
    std::cout << "\n";
}