// constexprConstinit.cpp from https://www.modernescpp.com/index.php/c-20-consteval-and-constinit

#include <iostream>

constexpr int constexprVal = 1000;
constinit int constinitVal = 1000;

int incrementMe(int val){ return ++val;}

int main() {

    auto val = 1000;
    const auto res = incrementMe(val);                                      // (1)                         
    std::cout << "res: " << res << std::endl;
    
    // std::cout << "res: " << ++res << std::endl;                       ERROR (2)
    // std::cout << "++constexprVal++: " << ++constexprVal << std::endl; ERROR (2)
    std::cout << "++constinitVal++: " << ++constinitVal << std::endl;       // (3)

    constexpr auto localConstexpr = 1000;                                   // (4)
    // constinit auto localConstinit = 1000; ERROR
    
}
