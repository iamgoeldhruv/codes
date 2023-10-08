#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        int i=1;
        int c=1;
        int m=0;
        string z="";
       while(c<=100){
            if(i%3==0 and i%5==0){
                z+="FB";
                c++;
            }
            else if(i%3==0){
                z+='F';
                c++;
            }
            else if(i%5==0){
                z+='B';
                c++;
            }
            i++;
            

        }
       
        bool isFound = z.find(s) != string::npos;
        if(isFound){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }
}