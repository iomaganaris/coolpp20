// consteval.cpp from https://www.modernescpp.com/index.php/c-20-consteval-and-constinit

#include <iostream>

int sqrRunTime(int n) {
    return n * n;
}

consteval int sqrCompileTime(int n) {
    return n * n;
}

constexpr int sqrRunOrCompileTime(int n) {
    return n * n;
}

int main() {

    // constexpr int prod1 = sqrRunTime(100); ERROR (1)
    constexpr int prod2 = sqrCompileTime(100);
    constexpr int prod3 = sqrRunOrCompileTime(100);
    
    int x = 100;
    
    int prod4 = sqrRunTime(x); 
    // int prod5 = sqrCompileTime(x); ERROR (2)
    int prod6 = sqrRunOrCompileTime(x);

}
