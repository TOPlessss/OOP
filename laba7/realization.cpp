#include <iostream>
#include <cstring>
#include <fstream>
#include "realization.h"

using namespace std;

bool realization(Graph &graph)
{
    menu();
    int way;
    cin >> way;
    switch (way)
    {
        case 1:
        {
          cout << "Enter name of vertex " << endl;
          string name;
          cin >> name;
          graph.addVertex(name);
          cout << endl;
          break;
        }
        case 2:
        {
            cout << "Enter the name of vertexes to link them and make a new arc" << endl;
            string name1,name2;
            cout << "Enter the name of the first vertex" << endl;
            cin >> name1;
            cout << "Enter the name of the second vertex" << endl;
            cin >> name2;
            auto ppair = make_pair(name1, name2);
            graph.addArc(ppair);
            cout << endl;
            break;
        }
        case 3:
        {
            cout << "Enter name of vertex to delete it" << endl;
            string name;
            cin >> name;
            graph.deleteVertex(name);
            cout << endl;
            break;
        }
        case 4:
        {
            cout << "Enter name of the vertex to rename it" << endl;
            string name1, name2;
            cin >> name1;
            cout << "Enter new name" << endl;
            cin >> name2;
            graph.renameVertex(name1, name2);
            cout << endl;
            break;
        }
        case 5:
        {
            cout << "Enter the name of vertexes to unlink them and delete the arc" << endl;
            string nameVertex1, nameVertex2;
            cout << "Enter the name of the first vertex" << endl;
            cin >> nameVertex1;
            cout << "Enter the name of the second vertex" << endl;
            cin >> nameVertex2;
            graph.deleteArc(nameVertex1, nameVertex2);
            cout << endl;
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            break;
        }
        case 8:
        {
            graph.printVertex();
            cout << endl;
            break;
        }
        case 9:
        {
            cout << "Enter the vertex would you like to see outgoing arcs" << endl;
            string nameVertex;
            cin >> nameVertex;
            graph.printOutArc(nameVertex);
            cout << endl;
            break;
        }
        case 10:
        {
            cout << "Enter the vertex would you like to see incoming arcs" << endl;
            string nameVertex;
            cin >> nameVertex;
            graph.printInArc(nameVertex);
            cout << endl;
            break;
        }
        default:
        {
            cout << "Program stoped" << endl;
            return false;
            break;
        }
    }
     return true;
}
