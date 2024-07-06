#pragma once

#include <string>

#include "../utils/diameter.hh"

class Part {
public:
    std::string name;
    double mass;
    double cost;
    Diameter diameter;
    bool is_radial_fitting; // Part can be fit on radial
    bool is_radial_part; // Part is a radial tank;
};
