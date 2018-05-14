#include <iostream>
#include <cstring>
#include <vector>
#include "graph.h"

using namespace std;

Graph::Graph()
{

}
//========================================================================
bool Graph::existVertex(string name)
{
    unsigned int i;
    for(i = 0; i < vertex_.size(); i++){
        if(vertex_[i].getVertex() == name)
        {
            return true;
        }
    }
    return false;
}
//========================================================================
void Graph::addVertex(string name)
{
    if (!existVertex(name))
    {
    vertex_.push_back(Vertex(name));
    }
    else
    {
        cout << "This vertex already exist" << endl;
    }
}
//========================================================================
void Graph::renameVertex(string oldName, string newName)
{
    if (!existVertex(oldName))
    {
        cout << "This vertex doesn't exist" << endl;
    }
    else if(existVertex(newName))
    {
            cout << "This vertex already exist" << endl;
    }
    else
    {
        unsigned int i;
        for (i = 0; i < vertex_.size(); i++)
        {
            if (vertex_[i].getVertex() == oldName)
            {
                vertex_[i].setVertex(newName);
            }
        }
        unsigned int j;
        for (j = 0; j < arc_.size(); j++)
        {
            if (arc_[j].getPair1() == oldName)
            {
                arc_[j].setPair1(newName);
            }
            if (arc_[i].getPair2() == oldName)
            {
                arc_[j].setPair2(newName);
            }

        }
    }
}
//========================================================================
void Graph::printVertex()
{
    if (!(vertex_.size()))
    {
        cout << "This vertex doesn't exist" << endl;
    }
    else
    {
        for(unsigned int i = 0; i < vertex_.size(); i++)
        {
            cout << vertex_[i].getVertex() << endl;
        }
    }
}
//========================================================================
void Graph::deleteVertex(string name)
{
    if (!existVertex(name))
    {
        cout << "This vertex doesn exist" << endl;
    }
    else
    {
    unsigned int i = 0;
    while(vertex_[i].getVertex() != name){
        i++;
    }
    vertex_[i] = vertex_[vertex_.size() - 1];
    vertex_.pop_back();
    }
    for (unsigned int i=0; i < arc_.size(); i++)
    {
        if((arc_[i].getPair1() == name) || (arc_[i].getPair2() == name))
        {
            arc_[i] = arc_[arc_.size() - 1];
            arc_.pop_back();
        }
    }

}
//========================================================================
bool Graph::linkedArc(pair <string, string> vert)
{
    for(unsigned int i = 0; i < arc_.size(); i++)
    {
        if(arc_[i].getPair1() == vert.first && arc_[i].getPair2() == vert.second)
        {
            return true;
        }
    }
    return false;
}
//========================================================================
void Graph::addArc(pair <string, string> VertArcs)
{
    if(linkedArc(VertArcs))
    {
        cout << "This arc already linked" << endl;
    }
    else
    {
        arc_.push_back(Arc(VertArcs));
    }

}
//========================================================================
void Graph::deleteArc(string vert1, string vert2)
{
    auto pair_ = make_pair(vert1, vert2);
    if (!linkedArc(pair_))
    {
        cout << "This arc doesn't exist" << endl;
    }
    else
    {
    unsigned int i = 0;
    while(arc_[i].getPair1() != vert1){
        i++;
    }
    arc_[i] = arc_[arc_.size() - 1];
    arc_.pop_back();
    }
}
//========================================================================
void Graph::printOutArc(string name)
{
    if (!existVertex(name))
    {
        cout << "This vertex doesn exist" << endl;
    }
    else
    {
        unsigned int i;
        int counter = 0;
        for(i = 0; i < arc_.size(); i++)
        {
          if(arc_[i].getPair1() == name)
            {
              cout << "Outgoing arc " << i + 1 << " They go to the ";
              cout << arc_[i].getPair2() << endl;
              counter++;
            }
        }
        if(!counter)
        {
          cout << "This vertex has no outgoing arcs" << endl;
        }
    }

}
//========================================================================
void Graph::printInArc(string name)
{
    if (!existVertex(name))
    {
        cout << "This vertex doesn exist" << endl;
    }
    else
    {
        unsigned int i;
        int counter = 0;
        for(i = 0; i < arc_.size(); i++)
        {
          if(arc_[i].getPair2() == name)
            {
              cout << "Incoming arc " << i + 1 << " They go from the ";
              cout << arc_[i].getPair1() << endl;
              counter++;
            }
        }
        if(!counter)
        {
          cout << "This vertex has no outgoing arcs" << endl;
        }
    }

}
//========================================================================
ostream & operator<<(ostream & coutOs, Graph & graph)
{
  coutOs << graph.vertex_.size() << endl;
  for (unsigned int i = 0; i < graph.vertex_.size(); i++)
  {
     coutOs << graph.vertex_[i].getVertex() << " ";
  }

  coutOs << endl;
  coutOs << graph.arc_.size() << endl;

  for (unsigned int j = 0; j < graph.arc_.size(); j++)
  {
     coutOs << graph.arc_[j].getPair1() << " " << graph.arc_[j].getPair2() << endl;
  }
  return coutOs;
}
//========================================================================
istream & operator>>(istream & cinIs, Graph & graph)
{
  graph.vertex_.clear();
  graph.arc_.clear();

  unsigned int sizeV;
  cinIs >> sizeV;

  for (unsigned int i = 0; i < sizeV; i++)
  {
    string tmp;
    cinIs >> tmp;
    graph.vertex_.push_back(Vertex(tmp));
  }
  unsigned int sizeA;
  cinIs  >> sizeA;
  for (unsigned int j = 0; j < sizeA; j++)
  {
    string vert1, vert2;
    cinIs >> vert1 >> vert2;
    auto pairV = make_pair(vert1, vert2);
    graph.arc_.push_back(Arc(pairV));
  }
  return cinIs;
}
//========================================================================
Graph::~Graph()
{

}
