#ifndef XCLASS_H
#define XCLASS_H
class xclass{
protected:
    int x;
public:
    xclass();
    xclass(int x);
    ~xclass();
    void SetX(int x);
    int GetX(void)const;
    virtual void display(void);

};
#endif