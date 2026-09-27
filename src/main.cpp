#include <iostream>
#include <cstdio>
#include <random>
#include "math.hpp"



// un namespace es un espacio de nombres
// std es un espacio de nombres que contiene distintas clases
using namespace util;

int main() {

    int count = 100;
    while(count-- > 0) {
        std::cout << random(random(count, count * 2), random(count, count * 2)) << '\n';
    }
    return 0;
}