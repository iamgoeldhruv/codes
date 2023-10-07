#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int c=10E5;
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        if(fabs(a-0)<c){
            c=fabs(a-0);
        }
    }
    cout<<c;
}
