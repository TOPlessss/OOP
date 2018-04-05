#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
#include <tuple>

class Circle : public Figure
{

public:
    std::tuple < int, int, int > circl;
    Circle();
    Circle(std::tuple < int, int, int > Circl);
    virtual ~Circle();
};

#endif
