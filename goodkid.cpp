#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=0;

        for(int i=0;i<n;i++){
            int p=1;
            a[i]++;
            for(int j=0;j<n;j++){
                p*=a[j];
            }
            a[i]--;
            if(p>max){
                max=p;
            }

        }
        cout<<max<<endl;

    }
}