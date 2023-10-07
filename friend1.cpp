#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    friend complex sumnumber(complex a,complex b);
    void set(int p,int q)
    {
        a=p;
        b=q;

    }
    void printn(){
        cout<<a<<b<<"i"<<endl;
    }

};
complex sumnumber(complex x,complex y)
{
    complex z;
    z.set(x.a+y.a,x.b+y.b);
    return z;
}

int main(){
    complex x,y,sum;
    x.set(2,3);
    y.set(5,6);
    x.printn();
    y.printn();
    sum=sumnumber(x,y);
    sum.printn();
    return 0;


    
}