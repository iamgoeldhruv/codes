#include<iostream>
using namespace std;
int * insertionsort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    return arr;
}
int main()
{
    int arr[9]={2,6,4,6,8,5,6,3,6};
    int *p=insertionsort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<*(p+i)<<" ";
    }

}
//worstcase o(n^2)
//bestcase o(n)