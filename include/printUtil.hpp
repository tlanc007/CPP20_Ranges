
#pragma once

#include <iostream>

#include <ranges>

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

void printPairs (auto rng)
{

    for (const auto& e: rng) {
        std::cout << "{" << e.first << ", " << e.second << "}\n";
    }
    std::cout << "\n";
}