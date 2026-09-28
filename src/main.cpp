#include <iostream>
#include <cstdio>
#include <random>
#include <CLI/CLI.hpp>
#include "math.hpp"



// un namespace es un espacio de nombres
// std es un espacio de nombres que contiene distintas clases
using namespace util;

int main(int argc, char* argv[]) {

    CLI::App app{"Do some work."};
    
    double randomMin = 1.0, randomMax = 100.0;
    int randomCount = 100;
    auto* random = app.add_subcommand("random", "create random numbers");
    random->add_option("--min", randomMin)->capture_default_str();
    random->add_option("--max", randomMax)->capture_default_str();
    random->add_option("--count", randomCount)->capture_default_str();
    

    app.require_subcommand(1);

    CLI11_PARSE(app, argc, argv);

    if(*random) {
        while(randomCount-- > 0) {
            std::cout << util::random(randomMin, randomMax) << '\n';
        }
    }
    return 0;
}