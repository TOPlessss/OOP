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
    tuple <int, int, int> circl;
    Pair pointA;
    Pair pointB;
    Pair pointC;
    Pair pointD;
    cout << "Enter the circle center coordinates and radius" << endl;
    int CircleX, CircleY, CircleR;
    cin >> CircleX >> CircleY >> CircleR;
    Circle *circle = new Circle(CircleX, CircleY, CircleR);
    cout << "Enter the type of figure" << endl
         << "triangle(1) or rectangle(2)" << endl;
    string type;
    cin >> type;
    if (type == "1" || type == "triangle")
    {
        cout << "Enter the coordinates of Point A" << endl;
        cin >> pointA.first >> pointA.second;
        cout << "Enter the coordinates of Point B" << endl;
        cin >> pointB.first >> pointB.second;
        cout << "Enter the coordinates of Point C" << endl;
        cin >> pointC.first >> pointC.second;
        Circle *circle2 = new Circle(*circle);
        Triangle *tri = new Triangle(pointA, pointB, pointC);
        Triangle *tri2 = new Triangle(*tri);
        Print(check(*circle, *tri2));
        delete tri;
        delete tri2;
        delete circle;
        delete circle2;
    }
    if (type == "2" || type == "rectangle")
    {
        cout << "Enter the coordinates of Point A" << endl;
        cin >> pointA.first >> pointA.second;
        cout << "Enter the coordinates of Point B" << endl;
        cin >> pointB.first >> pointB.second;
        cout << "Enter the coordinates of Point C" << endl;
        cin >> pointC.first >> pointC.second;
        cout << "Enter the coordinates of Point D" << endl;
        cin >> pointD.first >> pointD.second;
        Circle *circle2 = new Circle(*circle);
        Quadrangle *qua = new Quadrangle(pointA, pointB, pointC, pointD);
        Quadrangle *qua2 = new Quadrangle(*qua);
        Print(check(*circle, *qua2));
        delete qua;
        delete qua2;
        delete circle;
        delete circle2;
    }

    return 0;
}
