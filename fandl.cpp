#include<iostream>
using namespace std;
int c=0;
int s=10;
int d=s-1;
int first(int arr[],int s,int n)
{
    
    if(arr[0]==n)
    {
        return c;

    }
    c++;
    first(arr+1,s-1,n);

}
int last(int arr[],int s,int n)
{
    
    if(arr[s-1]==n)
    {
        return d;

    }
    d--;
    last(arr,s-1,n);

}
int main()
{

    int s=10;
    int arr[10]={1,3,2,4,5,6,7,8,2,5};
    cout<<"first occurence is at indix"<<first(arr,s,2)<<endl;
    cout<<"last occurence is at index"<<last(arr,s,2);

    return 0;
}




