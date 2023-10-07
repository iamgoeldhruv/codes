#include<iostream>
#include<vector>
using namespace std;
int *arr(int a[])
{
    for(int i=0;i<5;i++)
    {
        a[i]++;
    }
    return a;
}
int main()
{
    //int count=10; // declare variable count
    //int *countPtr{nullptr}; // declare pointer variable
    // countPtr = &count; //assign address of count to countPtr
    // cout<< countPtr << endl;
    // cout << &count << endl;
    // cout << &countPtr << endl;
    // countPtr = nullptr; // pointer value can be changed
    // cout << countPtr << endl;
    // cout << &count << endl;
    //t << count << endl; // returns 100
    // int count=10; // declare variable count
    // int *countPtr{nullptr}; // declare pointer variable
    // countPtr = &count; //assign address of count to countPtr
    // count = 500;
    // cout << *countPtr << endl;
    // vector<double> nums{1.2, 2.5, -1.3};
    // vector<double>*ptr{&nums};
    // cout<<&((*ptr).at(0));
    // int b[] {1, 2, 3};
    // //cout << b<< endl;
    // //cout << *b << endl;
    // int *bPtr {b}; // notice no & before b
    // //cout << bPtr << endl;
    // //cout << *bPtr << endl;
    // cout<<*(++bPtr);
    // int *a=new int[5];
    // for(int i=0;i<5;i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    //
    int a[5]={1,2,3,4,5};
    int *b=arr(a);
    for(int i=0;i<5;i++)
    {
        cout<<*(b++)<<" ";
    }
}


