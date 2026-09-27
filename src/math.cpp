#include <math.hpp>
#include <random>
#include <spdlog/spdlog.h>

namespace util {


    double mult(double a, double b) {
        return a * b;
    }

    int mult(int a, int b) {
        return a * b;
    }

    int add(int a, int b) {
        return a + b;
    }



    int random(int min, int max) {

        if(!(min <= max)) {
            spdlog::warn("random min({}) > max({})", min, max);
            std::swap(min, max);
        }

        static std::random_device rdvc;
        std::mt19937 gen(rdvc());
        std::uniform_int_distribution<int> dist(min, max);

        return dist(gen);
    }


    double random(double min, double max) {

        if(!(min <= max)) {
            spdlog::warn("random min({}) > max({})", min, max);
            std::swap(min, max);
        }

        // random_device es una SEED que obtiene un numero aleatorio desde el sistema operativo
        // es lento por lo que no se deberia inicializar muchas veces, se inicializa como estatica por esa razon
        // mt19937 es el generador, uno muy rapido y que a partir de una semilla (rdvc) es capaz de
        // generar una secuencia que siempre es igual a partir de la misma semilla
        static std::mt19937 gen(std::random_device{}());
        
        std::uniform_real_distribution<double> dist(min, max);

        return dist(gen);
    }

}