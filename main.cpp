#include <iostream>
#include "yclass.hpp"
using namespace std;
void disp(int (*arr)[3])
{
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
    }
}

int main(void){
   yclass y;
   y.display();
   xclass*x=new yclass();
   x->display();
   int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
   disp(arr);
   
    return 0;
}