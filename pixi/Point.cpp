//
// Created by caeta on 23/09/2024.
//

#include "Point.h"

Point::Point(const double x, const double y) : x(x), y(y) {
}

Point Point::clone() const {
    return {x, y};
}
