#ifndef MAP_H
#define MAP_H

#include "Robot.h"

class Point{
  float x;
  float y;
  float ang(float x, float y); //angle to a Point from another point realtive to the x axis
}

class Wall{
  vector<Point> points;
  float maxang(Position); //maximum ang of all the points in wall
  float minang(Position);
  Wall(Point p[]);
  Wall();
}

class Map{
  vector<Wall> walls;
  Map(Wall w[]);
  Map();
  float LoS(Position); //length of the line of sight from a position at an angle
}

void UpdateMap(Robot*);

#endif
