#include<iostream>
using namespace std;
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    int j=l;
    while(l<r)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
            
        }
        j++;
    }
    swap(arr[i+1],arr[r]);

}
void quicksort(int arr[],int s,int e)
{
    if(s<e)
    {
        int pi=partition(arr,s,e);
        quicksort(arr,s,pi-1);
        quicksort(arr,pi+1,e);
        

    }
}
int main()
{
    int arr[]={4,7,6,5,7,4};
    quicksort(arr,0,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];

    }
}
