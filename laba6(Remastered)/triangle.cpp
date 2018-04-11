#include <iostream>
#include <cmath>
#include <utility>
#include "triangle.h"

using namespace std;

Triangle::Triangle()
{
    cout << "Create Triangle" << endl;
}
Triangle::Triangle(Pair pointA, Pair pointB, Pair pointC):Polygon(pointA, pointB, pointC)
{
    cout << "Create Triangle" << endl;
}
Triangle::Triangle(const Triangle &other)
{
	pointA = other.pointA;
	pointB = other.pointB;
	pointC = other.pointC;

	cout << "Copy Triangle" << endl;
}
int Triangle::check(Circle &circle)
{
    if (pow((pointA.first - get<0>(circle.circl)), 2) + pow((pointA.second - get<1>(circle.circl)), 2) < pow(get<2>(circle.circl), 2) &&
        pow((pointB.first - get<0>(circle.circl)), 2) + pow((pointB.second - get<1>(circle.circl)), 2) < pow(get<2>(circle.circl), 2) &&
        pow((pointC.first - get<0>(circle.circl)), 2) + pow((pointC.second - get<1>(circle.circl)), 2) < pow(get<2>(circle.circl), 2))
    {
        return 0;
    }
    else if (pow((pointA.first - get<0>(circle.circl)), 2) + pow((pointA.second - get<1>(circle.circl)), 2) > pow(get<2>(circle.circl), 2) &&
        pow((pointB.first - get<0>(circle.circl)), 2) + pow((pointB.second - get<1>(circle.circl)), 2) > pow(get<2>(circle.circl), 2) &&
        pow((pointC.first - get<0>(circle.circl)), 2) + pow((pointC.second - get<1>(circle.circl)), 2) > pow(get<2>(circle.circl), 2))
    {
        return 1;
    }
    else if (pow((pointA.first - get<0>(circle.circl)), 2) + pow((pointA.second - get<1>(circle.circl)), 2) == pow(get<2>(circle.circl), 2) &&
        pow((pointB.first - get<0>(circle.circl)), 2) + pow((pointB.second - get<1>(circle.circl)), 2) == pow(get<2>(circle.circl), 2) &&
        pow((pointC.first - get<0>(circle.circl)), 2) + pow((pointC.second - get<1>(circle.circl)), 2) == pow(get<2>(circle.circl), 2))
    {
        return 2;
    }
    else{ return 3; }
}
Triangle::~Triangle()
{
    cout << "Delete Triangle" << endl;
}
