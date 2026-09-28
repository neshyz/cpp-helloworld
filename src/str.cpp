#include <string>
#include <vector>
#include <iostream>

namespace util {
    std::string stringify(std::vector<int> vec) {
        std::string str = "[";
        for (std::size_t i = 0; i < vec.size(); ++i) {
            if (i > 0) str += ", ";
            str += std::to_string(vec[i]);
        }

        str += "]";
        return str;
    }
}