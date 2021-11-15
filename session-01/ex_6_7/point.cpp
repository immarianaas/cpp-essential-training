//~ point.cpp
//~ This file contains the implementation of the functions

#include <stdio.h>
#include <iostream>
#include <math.h>

#include "point.h"

void print(Point2D p) {
  printf("(%.1f, %.1f)", p.x, p.y );
}

Point2D read_point() {
  Point2D p;
  char comma;
  std::cin >> p.x >> comma >> p.y;

  return p;
}

double distance(Point2D p1, Point2D p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
