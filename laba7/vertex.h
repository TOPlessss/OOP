#ifndef VERTEX_H
#define  VERTEX_H

class Vertex
{
private:
    std::string name;
public:
    Vertex(std::string name_);
    std::string getVertex();
    void setVertex(std::string name_);
    virtual ~Vertex();
};

#endif
