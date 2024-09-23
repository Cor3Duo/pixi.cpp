//
// Created by caeta on 23/09/2024.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H



class Rectangle {
public:
  Rectangle(double x, double y, int width, int height);

  [[nodiscard]] Rectangle clone() const;

  double x;
  double y;
  int width;
  int height;
};



#endif //RECTANGLE_H
