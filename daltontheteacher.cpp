#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==i+1){
                c++;
            }
        }
        if(c%2==0){
            cout<<c/2<<endl;
        }
        else{
            cout<<(c/2)+1<<endl;
        }
    }
}