#include <iostream>
#include "circle.h"


using namespace std;

Circle::Circle()
{
    cout << "Create Circle" << endl;
}
Circle::Circle(tuple < int, int, int > Circl)
{
    cout << "Enter the circle center coordinates and radius" << endl;
    cin >> get<0>(Circl);
    get<0>(circl) = get<0>(Circl);
    cin >> get<1>(Circl);
    get<1>(circl) = get<1>(Circl);
    cin >> get<2>(Circl);
    get<2>(circl) = get<2>(Circl);

    cout << "Create Circle" << endl;
}
Circle::~Circle()
{
    cout << "Delete Circle" << endl;
}
