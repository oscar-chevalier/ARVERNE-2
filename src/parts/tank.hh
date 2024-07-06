#pragma once

#include "part.hh"
#include "part_fuel.hh"

#include "../utils/diameter.hh"
#include "../utils/fuel_type.hh"

class tank : PartFuel {
public:
    Diameter top_diam;
    Diameter bottom_diam;

    double get_empty_mass();
    double get_full_mass();
    double get_empty_cost();
    double get_full_cost();
private:
    double quantity_fuel1;
    double quantity_fuel2;
};
