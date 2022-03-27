#include "yclass.hpp"
#include <iostream>
using namespace std;

void yclass::display(void) 
{
    cout <<"yclass";
}
yclass::yclass(int x,int y):xclass(x)
{
    this->y=y;
}
yclass::yclass():xclass()
{
    y=0;
}
yclass::~yclass()
{
    
}