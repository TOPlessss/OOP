#include <iostream>
#include <cstring>
#include <vector>
#include "vertex.h"

using namespace std;

Vertex::Vertex(string name_)
{
    name = name_;
}

string Vertex::getVertex()
{
    return name;
}

void Vertex::setVertex(string name_)
{
    name = name_;
}

Vertex::~Vertex()
{

}
