#pragma once

#include "part_fuel.hh"

#include "../utils/diameter.hh"

class tank : PartFuel {
public:

    double get_top_diam();
    double get_bottom_diam();
    double get_empty_mass();
    double get_full_mass();
    double get_empty_cost();
    double get_full_cost();
private:
    Diameter bottom_diam;
    double quantity_fuel1;
    double quantity_fuel2;
};
