#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string name;
    cin>>name;
    char c[name.length()];
    for(int i=0;i<name.length();i++){
        c[i]=name[i];
    }
    int j=0;
    int k=0;
    for(char el:c){
        int i =0;
        for(char el2:c){
            if(el==el2){
                i++;
            }
        }
        if(i==1){
            j++;
        }
        else if(i>1){
            k++;
         }
        
    }
    int z=j+k;
    if(z%2==0){
        cout<< "CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
            
        
            
        
    
    
    
    return 0;
}