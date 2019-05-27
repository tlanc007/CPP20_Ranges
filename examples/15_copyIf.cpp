/*
 15_copyIf.cpp

 */

#include <initializer_list>
#include <iostream>
#include <ranges>
#include <vector>

#include "rangeNamespace.hpp"


auto is_six = [](int i) -> bool { return i == 6; };
auto print = [] (int i) { std::cout << i << " "; };

int main() {

    std::vector<int> v { 1, 2, 3, 4, 5, 6};
    {
        // copy from one container to another
        std::vector<int> v_cpy {};
        rng::copy_if(v, rng::back_inserter(v_cpy), is_six);
        rng::for_each( v_cpy, print ); //6
        std::cout << "\n";
    }
    {
        // copy from braced init list range
        std::vector<int> v_cpy {};
        rng::copy_if(std::initializer_list{6, 7, 8}, rng::back_inserter(v_cpy), is_six);
        rng::for_each( v_cpy, print ); //6
        std::cout << "\n";
    }
}
