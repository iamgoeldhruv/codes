#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string  ph;
    cin>>ph;
   
    int arr[n];
    
    if(n%2==0){
        for(int i=0;i<n;i++){
            cout<<ph[i];
            if(i%2!=0 and i!=n-1){
                cout<<'-';
            }
        }
    }
    else if(n%3==0){
        int c=0;
        for(int i=0;i<n;i++){
            cout<<ph[i];
            c++;
            if(c!=0 and c%3==0 and i!=n-1){
                cout<<'-';
            }

        }
    }
    else if(n%3==1){
        for(int i=0;i<n-3;i++){
            cout<<ph[i];
            if(i%2!=0 ){
                cout<<'-';
            }
        }
        for(int i=n-3;i<n;i++){
            cout<<ph[i];
        }

    }
    else if(n%3==2){
        int c=0;
        for(int i=0;i<n-2;i++){
            cout<<ph[i];
            c++;
            if(c!=0 and c%3==0){
                cout<<'-';
            }

        }
        for(int i=n-2;i<n;i++){
            cout<<ph[i];
        }

    }

}