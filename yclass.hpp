#ifndef YCLASS_H
#define YCLASS_H
#include "xclass.hpp"
class yclass:public xclass{
    private:
    int y;
    public:
    yclass();
    yclass(int x,int y);
    ~yclass();
    void SetY(int y);
    int GetY(void);
    void display(void)override;
};
#endif