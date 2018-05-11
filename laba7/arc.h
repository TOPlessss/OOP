#ifndef ARC_H
#define  ARC_H

class Arc
{
private:
    std::pair < std::string, std::string > VertArcs;
public:
    Arc(std::pair <std::string, std::string> pair_);
    std::string getPair1();
    std::string getPair2();
    void setArc(std::pair <std::string, std::string> VertArcs_);
    void setPair1(std::string name1);
    void setPair2(std::string name2);
    virtual ~Arc();
};

#endif
