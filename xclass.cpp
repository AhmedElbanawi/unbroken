#include "xclass.hpp"
#include <iostream>
using namespace std;
xclass::xclass()
{
    this->x=0;
}
xclass::xclass(int x)
{
    this->x=x;
}
int xclass::GetX(void)const
{
    return this->x;
}
void xclass::SetX(int x)
{
    this->x=x;
}
xclass::~xclass()
{

}
void xclass::display(void) 
{
    cout<<"xclass"<<endl;
}
