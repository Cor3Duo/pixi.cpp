//
// Created by caeta on 23/09/2024.
//

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x, int y);

    [[nodiscard]] Point clone() const {
        return {x, y};
    }

    int x;
    int y;
};



#endif //POINT_H
