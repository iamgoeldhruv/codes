#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int k)
    {
        size++;
        arr[size]=k;
        int i=size;
        while(i>1)
        {
            int parent=i/2;
            if(arr[parent]<arr[i])
            {
                swap(arr[parent],arr[i]);
            }
            else{
                return;
            }
        }
    }
    //tc=0{logn}
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deelete()
    {
        if(size==0)
        {
            cout<<"HEAP IS EMPTY"<<endl;
            return;
        }
        arr[1]==arr[size];
        size--;
        int i=1;
        while(i<size)
        {
            int li=2*i;
            int ri=2*i+1;
            if(li<size && arr[li]>arr[i])
            {
                swap(arr[i],arr[li]);
                i=li;

            }
            else if(ri<size && arr[ri]>arr[i])
            {
                swap(arr[i],arr[ri]);
                i=ri;
            }
            else
            {
                return;
            }


        }

    }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deelete();
    h.print();
    

}