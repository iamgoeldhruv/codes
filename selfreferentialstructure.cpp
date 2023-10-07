#include<iostream>
using namespace std;
typedef struct student{
    int age;
    char classs;
    struct student*ptr;
}st ;
int main()
{
    st dhruv;
    dhruv.age=19;
    dhruv.classs='n';
    dhruv.ptr=NULL;
    st she;
    she.age=20;
    she.classs='m';
    she.ptr=NULL;
    dhruv.ptr=&she;
//now we can access the members of she using dhruv
    cout<<dhruv.ptr->age;



}