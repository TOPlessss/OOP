#include <iostream>
#include "polygon.h"

using namespace std;

Polygon::Polygon()
{
    cout << "Create Polygon" << endl;
}
Polygon::Polygon(Pair pA, Pair pB, Pair pC)
{
    cout << "Enter the coordinates of Point A" << endl;
    cin >> pA.first >> pA.second;
    pointA = pA;
    cout << "Enter the coordinates of Point B" << endl;
    cin >> pB.first >> pB.second;
    pointB = pB;
    cout << "Enter the coordinates of Point C" << endl;
    cin >> pC.first >> pC.second;
    pointC = pC;

    cout << "Create Polygon" << endl;
}
Polygon::Polygon(Pair pA, Pair pB, Pair pC, Pair pD)
{
    cout << "Enter the coordinates of Point A" << endl;
    cin >> pA.first >> pA.second;
    pointA = pA;
    cout << "Enter the coordinates of Point B" << endl;
    cin >> pB.first >> pB.second;
    pointB = pB;
    cout << "Enter the coordinates of Point C" << endl;
    cin >> pC.first >> pC.second;
    pointC = pC;
    cout << "Enter the coordinates of Point D" << endl;
    cin >> pD.first >> pD.second;
    pointD = pD;

    cout << "Create Polygon" << endl;
}
Polygon::~Polygon()
{
    cout << "Delete Polygon" << endl;
}
