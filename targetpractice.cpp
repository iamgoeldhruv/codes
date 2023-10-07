#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p=0;
        int z=10;
        for(int i=1;i<=10;i++){
            string s;
            cin>>s;
            if(i==1 or i==10){
                for(int j=0;j<10;j++){
                    if(s[j]=='X'){
                        p+=1;
                    }
                }
            }
            if(i==2 or i==9){
                for(int j=0;j<10;j++){
                    if(s[j]=='X' and (j==0 or j==9)){
                        p+=1;
                    }
                    else if(s[j]=='X'){
                        p+=2;
                    }
                }
            }
            if(i==3 or i==8){
                for(int j=0;j<10;j++){
                     if(s[j]=='X' and (j==0 or j==9)){
                        p+=1;
                    }
                    else if(s[j]=='X' and (j==1 or j==8)){
                        p+=2;
                    }
                    else if(s[j]=='X'){
                        p+=3;
                    }
                }
            }
            if(i==4 or i==7){
                for(int j=0;j<10;j++){
                    if(s[j]=='X' and (j==0 or j==9)){
                        p+=1;
                    }
                    else if(s[j]=='X' and (j==1 or j==8)){
                        p+=2;
                    }
                    else if(s[j]=='X' and (j==2 or j==7)){
                        p+=3;
                    }
                    else if(s[j]=='X'){
                        p+=4;
                    }
                }
            }
            if(i==5 or i==6){
                for(int j=0;j<10;j++){
                    if(s[j]=='X' and (j==0 or j==9)){
                        p+=1;
                    }
                    else if(s[j]=='X' and (j==1 or j==8)){
                        p+=2;
                    }
                    else if(s[j]=='X' and (j==2 or j==7)){
                        p+=3;
                    }
                    else if(s[j]=='X' and (j==3 or j==6)){
                        p+=4;
                    }
                    else if(s[j]=='X'){
                        p+=5;
                    }
                }

            }

            }
            cout<<p<<endl;
        }
    }
