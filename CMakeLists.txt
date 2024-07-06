cmake_minimum_required(VERSION 3.28)
project(arverne2)

set(CMAKE_CXX_STANDARD 23)

add_executable(arverne2 main.cpp
        src/parts/engine.cc
        src/parts/engine.hh
        src/utils/fuel_type.hh
        src/utils/diameter.hh
        src/utils/pressure_model.cc
        src/utils/pressure_model.hh
        src/utils/diameter.cc
        src/parts/tank.cc
        src/parts/tank.hh
        src/parts/part.hh
        src/parts/part_fuel.hh
        src/parts/decoupler.hh
)
