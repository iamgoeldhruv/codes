#include<iostream>
using namespace std;
typedef struct employee{
    int id;
    char favchar;
    float salary;
}ep ;
int main()
{
    ep dhruv;
    struct employee shubham;
    struct employee anacondaa;
    ep chotabheem;

    dhruv.id=123;
    dhruv.favchar='a';
    dhruv.salary=123223344.56;
    cout<<dhruv.id<<endl<<dhruv.favchar<<endl<<dhruv.salary;
}
