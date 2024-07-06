#include "diameter.hh"

bool Diameter::is_bigger_than(Diameter diam) {
    return value > diam.value;
}