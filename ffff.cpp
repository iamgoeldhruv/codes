#include<iostream>
using namespace std;
int main(){
    int pre=1;
    int pre2=0;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int curr=pre+pre2;pre2=pre;
        pre=curr;
         cout<<pre;
       
    }
   

}