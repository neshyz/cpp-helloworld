# helloworld

Proyecto de práctica en C++20 con CMake.

## Estructura

```
.
├── CMakeLists.txt
├── include/
│   └── math.hpp     # Declaraciones del namespace util
└── src/
    ├── main.cpp     # Punto de entrada
    └── math.cpp     # Implementación de util (add, mult, random)
```

## Requisitos

- Compilador con soporte para C++20 (g++ o clang++)
- CMake ≥ 3.20
- Ninja (opcional)
- [spdlog](https://github.com/gabime/spdlog)

## Compilar y ejecutar

```bash
cmake -S . -B build -G Ninja
cmake --build build
./build/programa
```
