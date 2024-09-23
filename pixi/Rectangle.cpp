//
// Created by caeta on 23/09/2024.
//

#include "Rectangle.h"

Rectangle::Rectangle(double x, double y, int width, int height) : x(x), y(y), width(width), height(height) {
}

Rectangle Rectangle::clone() const {
    return { x, y, width, height };
}
