#include <iostream>
#include <cmath>
#include "quadrangle.h"

using namespace std;
Quadrangle::Quadrangle()
{
    cout << "Create Quadrangle" << endl;
}
Quadrangle::Quadrangle(Pair pointA, Pair pointB, Pair pointC, Pair pointD) : Polygon(pointA, pointB, pointC, pointD)
{
    cout << "Create Quadrangle" << endl;
}
Quadrangle::Quadrangle(const Quadrangle &otherQua)
{
    pointA = otherQua.pointA;
    pointB = otherQua.pointB;
    pointC = otherQua.pointC;
    pointD = otherQua.pointD;
    cout << "Copy Quadrangle" << endl;
}
  int Quadrangle::PositionCheck (Circle &circle)
{
    if (pow((pointA.first - get<0>(circle.circl)), 2) + pow((pointA.second - get<1>(circle.circl)), 2) < pow(get<2>(circle.circl), 2) &&
        pow((pointB.first - get<0>(circle.circl)), 2) + pow((pointB.second - get<1>(circle.circl)), 2) < pow(get<2>(circle.circl), 2) &&
        pow((pointC.first - get<0>(circle.circl)), 2) + pow((pointC.second - get<1>(circle.circl)), 2) < pow(get<2>(circle.circl), 2) &&
        pow((pointD.first - get<0>(circle.circl)), 2) + pow((pointD.second - get<1>(circle.circl)), 2) < pow(get<2>(circle.circl), 2))
    {
        return 0;
    }
    else if (pow((pointA.first - get<0>(circle.circl)), 2) + pow((pointA.second - get<1>(circle.circl)), 2) > pow(get<2>(circle.circl), 2) &&
        pow((pointB.first - get<0>(circle.circl)), 2) + pow((pointB.second - get<1>(circle.circl)), 2) > pow(get<2>(circle.circl), 2) &&
        pow((pointC.first - get<0>(circle.circl)), 2) + pow((pointC.second - get<1>(circle.circl)), 2) > pow(get<2>(circle.circl), 2) &&
        pow((pointD.first - get<0>(circle.circl)), 2) + pow((pointD.second - get<1>(circle.circl)), 2) > pow(get<2>(circle.circl), 2))
    {
        return 1;
    }
    else if (pow((pointA.first - get<0>(circle.circl)), 2) + pow((pointA.second - get<1>(circle.circl)), 2) == pow(get<2>(circle.circl), 2) &&
        pow((pointB.first - get<0>(circle.circl)), 2) + pow((pointB.second - get<1>(circle.circl)), 2) == pow(get<2>(circle.circl), 2) &&
        pow((pointC.first - get<0>(circle.circl)), 2) + pow((pointC.second - get<1>(circle.circl)), 2) == pow(get<2>(circle.circl), 2) &&
        pow((pointD.first - get<0>(circle.circl)), 2) + pow((pointD.second - get<1>(circle.circl)), 2) == pow(get<2>(circle.circl), 2))
    {
        return 2;
    }
    else{ return 3; }
}
Quadrangle::~Quadrangle()
{
    cout << "Delete Quadrangle" << endl;
}
