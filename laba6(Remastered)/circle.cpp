#include <iostream>
#include <tuple>
#include "circle.h"


using namespace std;

Circle::Circle()
{
    cout << "Create Circle" << endl;
}
Circle::Circle(int pX, int pY, int R)
{
    auto Circle_tuple = make_tuple(pX, pY, R);
    circl = Circle_tuple;

    cout << "Create Circle" << endl;
}
Circle::Circle(const Circle &other)
{
    circl = other.circl;

    cout << "Copy Circle" << endl;
}
Circle::~Circle()
{
    cout << "Delete Circle" << endl;
}
