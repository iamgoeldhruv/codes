#include<iostream>
using namespace std;
class complex{
    double a;
    double b;
    public:
    complex(){};
    complex(double x,double y)
    {
        a=x;
        b=y;
    }
    void addition(complex &c1,complex &c2)
    {
        add.a=c1.a+c2.a;
    }

};
int main()
{
    complex c1(3,4),c2(5,6),add;
    add.addition(c1,c2);
}