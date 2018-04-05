#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "polygon.h"
#include "circle.h"

class Triangle : public Polygon
{
public:

    Triangle();
    Triangle(Pair, Pair, Pair);
    Triangle(const Triangle&);
    virtual int PositionCheck (Circle &circle);
    virtual ~Triangle();
};

#endif
