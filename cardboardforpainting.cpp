#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,c;
        cin>>n>>c;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int end=(sqrt(c));
        int start=1;
        while(true){
            int w=(end+start)/2;
            long long int sum1=0;
            for(int i=0;i<n;i++){
                sum1+=pow((2*w+a[i]),2);

            }
            if(sum1==c){
                cout<<w<<endl;
                break;
            }
            if(sum1>c){
                end=w;
                continue;
            }
            if(sum1<c){
                start=w;
                continue;
            }

        }
         
    }
}