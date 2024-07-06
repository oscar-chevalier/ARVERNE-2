#pragma once

#include <string>

#include "../utils/diameter.hh"
#include "../utils/pressure_model.hh"
#include "../utils/fuel_type.hh"


class engine {
public:
    std::string name;
    double mass;
    double cost;
    Fuel_type fuel;
    Diameter diameter;
    double consumption;
    double gimbal;
private:
    PressureModel pressure_model;
};
