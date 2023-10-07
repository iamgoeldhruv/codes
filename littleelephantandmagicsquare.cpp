#include<iostream>
using namespace std;
int main(){
    long long int a[3];
    long long int b[3];
    long long int c[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        cin>>c[i];
    }
    
    int p=a[1]+a[2];
    int q=c[0]+c[1]-b[0]-b[2];
    int y=(p+q)/2;
    int z=p-y;
    int r=b[0]+b[2]-a[1]-a[2];
    int x=r+y;
    a[0]=x;
    b[1]=y;
    c[2]=z;
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;


    


    
}