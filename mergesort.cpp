#include<iostream>
using namespace std;
void merge(int arr[],int s,int e,int mid)
{
    int l1=(mid-s)+1;
    int l2=e-mid;
    int ra[l1];
    int la[l2];
    
    for(int i=0;i<l1;i++)
    {
        ra[i]=arr[s+i];
    }

    for(int i=0;i<l2;i++)
    {
        la[i]=arr[mid+1+i];
    }
    int k=s;
    int i=0;
    int j=0;
    while(i<l1 && j<l2)
    {
        if(ra[i]<la[j])
        {
            arr[k]=ra[i];
            i++;
            k++;
        }
        else{
            arr[k]=la[j];
            k++;
            j++;
        }
    }
    while(i<l1)
    {
        arr[k]=ra[i];
        i++;
        k++;
    }
    while(j<l1)
    {
        arr[k]=la[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,e,mid);
    }
}





int main()
{     int n;
cin>>n;
    int arr[n]={5,4,3,2,1};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }





}