#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <tuple>
#include "figure.h"


class Circle : public Figure
{

public:
    std::tuple < int, int, int > circl;
    Circle();
    Circle(int, int, int);
    Circle(const Circle &other);
    virtual ~Circle();
};

#endif
