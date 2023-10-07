#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int summ(int a[],int n){
    int summ=0;
    int mxxx=0;
    for(int i=0;i<n;i++){
        summ+=a[i]*(i+1);
        if((a[i]*(i+1))>mxxx){
            mxxx=a[i]*(i+1);
        }
    }
    return (summ-mxxx);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            a[i]=(i+1);
            sum+=(i+1)*(i+1);
        }
        int ans=sum-n*n;
        int i=0;
        while(i<=n){
            int p;
            
            reverse(a+n-i,a+n);
            p=summ(a,n);
           
            ans=max(p,ans);
            reverse(a+n-i,a+n);
            i++;
        }
        cout<<ans<<endl;
    }
}