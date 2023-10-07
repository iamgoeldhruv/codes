#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    long long int c=0;
    long long int i=0;
    while(true){
        if(s[i]==NULL or s[i+1]==NULL){
            break;
        }
       else{
        if(i%2==0){
            if(s[i]==s[i+1]){
               
                s.erase(s.begin()+i+1);
                //  cout<<s<<endl;
                c++;
            }
            else{
                i++;

            }
        }
        else{i++;}
       }

    }
    if(s.length()%2==0){
        cout<<c<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<c+1<<endl;
        //  cout<<s<<endl ;
        s.erase(s.begin()+s.length()-1);
 
        cout<<s<<endl;
 
    }
    
}