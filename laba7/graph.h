#ifndef GRAPH_H
#define  GRAPH_H
#include <cstring>
#include <vector>
#include <tuple>
#include "vertex.h"
#include "arc.h"

class Graph
{
private:
    std::vector <Vertex> vertex_;
    std::vector <Arc> arc_;
    bool existVertex(std::string name);
    bool linkedArc(std::pair <std::string, std::string> vert);
public:
    Graph();
    void addVertex(std::string name);
    void renameVertex(std::string oldName, std::string newName);
    void printVertex();
    void deleteVertex(std::string name);
    void addArc(std::pair <std::string, std::string> VertArcs);
    void deleteArc(std::string vert1, std::string vert2);
    void printOutArc(std::string name);
    void printInArc(std::string name);
    virtual ~Graph();
};


#endif
