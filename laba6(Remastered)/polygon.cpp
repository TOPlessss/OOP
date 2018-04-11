#include <iostream>
#include "polygon.h"

using namespace std;

Polygon::Polygon()
{
    cout << "Create Polygon" << endl;
}
Polygon::Polygon(Pair pA, Pair pB, Pair pC)
{
    pointA = pA;
    pointB = pB;
    pointC = pC;

    cout << "Create Polygon" << endl;
}
Polygon::Polygon(Pair pA, Pair pB, Pair pC, Pair pD)
{
    pointA = pA;
    pointB = pB;
    pointC = pC;
    pointD = pD;

    cout << "Create Polygon" << endl;
}
Polygon::~Polygon()
{
    cout << "Delete Polygon" << endl;
}
