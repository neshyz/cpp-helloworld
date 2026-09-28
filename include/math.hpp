

#pragma once

#include <vector>

namespace util {
    
    int add(int a, int b);
    int mult(int a, int b);
    double mult(double a, double b);
    
    
    int random(int min, int max);
    double random(double min, double max);

    void bogo(std::vector<int>& vec);
    bool isSorted(std::vector<int> vec);
    void shuffle(std::vector<int>& vec);
}