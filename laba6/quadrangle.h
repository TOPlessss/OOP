#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include <utility>
#include "polygon.h"
#include "circle.h"

class Quadrangle : public Polygon
{
public:

    Quadrangle();
    Quadrangle(Pair, Pair, Pair, Pair);
    Quadrangle(const Quadrangle&);
    virtual int PositionCheck (Circle &circle);
    virtual ~Quadrangle();
};

#endif
