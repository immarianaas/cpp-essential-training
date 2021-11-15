//~ point.h
//~ This header file contains the data structure declaration and the
//~ function prototypes

//~ Data structure representing a point as a pair of real values
typedef struct point {
  double x, y;
} Point2D;

//~ Funtion prototypes:
void print(Point2D p);

Point2D read_point();
double distance(Point2D p1, Point2D p2);