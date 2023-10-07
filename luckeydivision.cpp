#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n%4==0){
        cout<<"YES";
    }
    else if(n%7==0){
        cout<<"YES";

    }
    else if(n%47==0){
        cout<<"YES";
    }
    else if(n%447==0){
        cout<<"YES";
    }
    else if(n%477==0){
        cout<<"YES";
    }
    else{
        cout<<"NO"<<endl;
    }
}