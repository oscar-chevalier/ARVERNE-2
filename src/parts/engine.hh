#pragma once

#include <string>

#include "part_fuel.hh"
#include "../utils/pressure_model.hh"


class engine : PartFuel {
public:
    double consumption;
    double gimbal;
private:
    PressureModel pressure_model;
};
