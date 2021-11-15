//~ ex1.cpp
//~ This file contains the main program

#include <stdio.h>

#include "point.h"

int main()
{
  //~ Testing module functions:
  Point2D p;
  p.x = 1;
  p.y = 2;

  print(p);
  printf("\n");

  Point2D new_p = read_point();
  print(new_p);
  printf("\n\n");

  printf("Distance: %f", distance(p, new_p));

  printf("Insert points until (0,0):\n");

  Point2D nnp, furthest = {0, 0};
  const Point2D origin = {0, 0};
  int counter = 0;
  double total_dist = 0, max_dist = 0;

  while (true)
  {
    printf("Enter a point: ");
    nnp = read_point();

    if (nnp.x == origin.x && nnp.y == origin.y) break;

    counter++;
    int dist = distance(nnp, origin);
    total_dist += dist;

    if (dist > max_dist) {
      max_dist = dist;
      furthest = nnp;
    }
  }


  printf("Number of points entered: %d\n", counter);
  printf("Sum of distances to the origin: %.1f\n", total_dist);
  printf("Furthest point from the origin: "); print(furthest); 
    printf(" with a distance of %.1f", max_dist);
  printf("\n");
  return 0;
}
