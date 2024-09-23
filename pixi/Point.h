//
// Created by caeta on 23/09/2024.
//

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(double x, double y);

    [[nodiscard]] Point clone() const;

    double x;
    double y;
};



#endif //POINT_H
