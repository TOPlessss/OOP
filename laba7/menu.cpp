#include <iostream>
#include "menu.h"

using namespace std;

void menu()
{
    cout << "Please select necessary operation" << endl << endl;
    cout << "Press 1 to add new vertex to graph" << endl;
    cout << "Press 2 to add new arc to graph" << endl;
    cout << "Press 3 to delete vertex from graph" << endl;
    cout << "Press 4 to change name of vertex" << endl;
    cout << "Press 5 to delete arc from graph" << endl;
    cout << "Press 6 to save graph to file" << endl;
    cout << "Press 7 to load graph from file" << endl;
    cout << "Press 8 to print list of vertexes" << endl;
    cout << "Press 9 to print list of outgoing arcs from vertex" << endl;
    cout << "Press 10 to print list of incoming arcs to vertex" << endl;
}
