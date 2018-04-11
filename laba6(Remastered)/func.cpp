#include <iostream>
#include "func.h"
using namespace std;

int check(Circle &circle, Polygon &polygon)
{
    return polygon.check(circle);
}

void Print(int a)
{
    if (a == 0)
    {
        cout << endl;
        cout << "----------------" <<endl;
        cout << "ANSWER: Inside" << endl;
        cout << "----------------" <<endl;
        cout << endl;
    }
    if (a == 1)
    {
        cout << endl;
        cout << "----------------" <<endl;
        cout << "ANSWER: Outside" << endl;
        cout << "----------------" <<endl;
        cout << endl;
    }
    if (a == 2)
    {
        cout << endl;
        cout << "----------------" <<endl;
        cout << "ANSWER: Touch" << endl;
        cout << "----------------" <<endl;
        cout << endl;
    }
    if (a == 3)
    {
        cout << endl;
        cout << "----------------" <<endl;
        cout << "ANSWER: Error" << endl;
        cout << "----------------" <<endl;
        cout << endl;
    }
}
