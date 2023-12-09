#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x;
    char y;
    int rows[8]={1,2,3,4,5,6,7,8};
    string s="abcdefgh";
    cin>>y;

    cin>>x;

   
    for( int i=0; i<8;i++){
        if(s[i]==y){
        continue;}
        else{
        cout<<x<<s[i]<<endl;
        }
    }
        for(int j=0; j<8; j++){
            if(j+1==x){
            continue;
            }
            else{
            cout<<rows[j]<<y<<endl;
            }
        }
    }
    return 0;
    

}