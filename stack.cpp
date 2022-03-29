#include <iostream>
using namespace std;
template<class T>class Stack
{
private:
    T*arr;
    int size,top;
public:
    Stack(int size);
    ~Stack();
    void Push(T data);
    int Pop(T*ret);
    void Display(void);
};
int main(void)
{
    Stack<int>s(3);
    for(int i=0;i<3;i++)
        s.Push(i);
    s.Display();
    int tmp;
    for(int i=0;i<3;i++)
    {
        s.Pop(&tmp);
        cout<<tmp<<"\t";
    }
    cout<<endl;
        
    return 0;
}
template<class T>
Stack<T>::Stack(int size)
{
    this->top=-1;
    this->size=size;
    this->arr=new T[size];
}
template<class T>
Stack<T>::~Stack()
{
    delete [] this->arr;
}
template<class T>
void Stack<T>::Push(T data)
{
    if(this->top!=this->size)
    {
        ++this->top;
        this->arr[this->top]=data;
    }else
    {
        cout<<"stack is full"<<endl;
    }
}
template<class T>
int Stack<T>::Pop(T*ret)
{
    if(-1==this->top)
    {
        cout<<"stack is empty"<<endl;
        return 0;
    }
    *ret=this->arr[this->top];
    --this->top;
    return 1;
}
template<class T>
void Stack<T>::Display(void)
{
    for(int i=this->top;i>-1;i--)
    {
        cout<<this->arr[i]<<"\t";
    }
}
