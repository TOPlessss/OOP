#include <iostream>
#include <cstring>
#include <vector>
#include "arc.h"

using namespace std;

Arc::Arc(pair <string, string> pair_)
{
  VertArcs = pair_;
}

string Arc::getPair1()
{
    string vertarcs1 = VertArcs.first;
    return vertarcs1;
}

string Arc::getPair2()
{
    string vertarcs2 = VertArcs.second;
    return vertarcs2;
}

void Arc::setArc(pair <string, string> VertArcs_)
{
    VertArcs = VertArcs_;
}

void Arc::setPair1(string name1)
{
    VertArcs.first = name1;
}

void Arc::setPair2(string name2)
{
    VertArcs.second = name2;
}

Arc::~Arc()
{

}
