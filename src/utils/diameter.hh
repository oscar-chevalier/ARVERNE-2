#pragma once

class Diameter {
public:
    enum Value {
        TINY = 06,
        SMALL = 125, // MK1
        MK2 = 200,
        LARGE = 250,
        MK3 = 300,
        EXTALARGE = 375,
        HUGE = 500, // 5m, DLC-MH
    };

    bool is_bigger_than(Diameter diam);

private:
    Value value;
};