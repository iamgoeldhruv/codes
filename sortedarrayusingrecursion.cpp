#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    if(arr[0]<=arr[1] and sorted(arr+1,n-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n=5;
    int arr[5]={1,2,3,5,4};
    if(sorted(arr,n))
    {
        cout<<"yess";
       
    }
    else{
        cout<<"no";
    }
    return 0;
}