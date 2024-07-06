#pragma once

#include <string>

#include "part.hh"
#include "part_fuel.hh"
#include "../utils/diameter.hh"
#include "../utils/pressure_model.hh"
#include "../utils/fuel_type.hh"


class engine : PartFuel {
public:
    Diameter diameter;
    double consumption;
    double gimbal;
private:
    PressureModel pressure_model;
};
