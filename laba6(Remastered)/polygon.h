#ifndef POLYGON_H
#define POLYGON_H
#include <utility>
#include "figure.h"
#include "circle.h"

typedef std::pair < int, int > Pair;

class Polygon : public Figure
{
public:
    Pair pointA;
    Pair pointB;
    Pair pointC;
    Pair pointD;
    Polygon();
    Polygon(Pair, Pair, Pair);
    Polygon(Pair, Pair, Pair, Pair);
    virtual int check (Circle &circle) = 0;
    virtual ~Polygon();
};

#endif
