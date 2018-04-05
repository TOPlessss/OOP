#include <iostream>
#include "triangle.h"
#include "quadrangle.h"
#include "circle.h"
#include "func.h"
#include "figure.h"
#include "polygon.h"

using namespace std;

int main()
{
    tuple <int, int, int> pCircle;
    Pair pointA;
    Pair pointB;
    Pair pointC;
    Pair pointD;
    cout << "Enter the type of figure" << endl
         << "triangle(1) or rectangle(2)" << endl;
    string type;
    cin >> type;
    if (type == "1" || type == "triangle")
    {
        Circle *circle = new Circle(pCircle);
        Triangle *tri = new Triangle(pointA, pointB, pointC);
        Triangle *tri2 = new Triangle(*tri);
        Print(PositionCheck(*circle, *tri2));
        delete tri;
        delete tri2;
        delete circle;
    }
    if (type == "2" || type == "rectangle")
    {
        Circle *circle = new Circle(pCircle);
        Quadrangle *qua = new Quadrangle(pointA, pointB, pointC, pointD);
        Quadrangle *qua2 = new Quadrangle(*qua);
        Print(PositionCheck(*circle, *qua2));
        delete qua;
        delete qua2;
        delete circle;
    }

    return 0;
}
