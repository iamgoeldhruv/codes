#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int sum=0;
         long long int sum1=0;
           long long int sum2=0;
           long long int summ=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            summ+=a[i];
            



        }
        sort(a,a+n);
       
        unordered_map<long long int,long long int>m1;
         unordered_map<long long int,long long int>m2;
        for(int i=0;i<2*k;i+=2){
            sum+=a[i]+a[i+1];
            m1[i/2+1]=sum;
        }
        long long int c=0;
        long long int p=n-1;
        while(c<k){
            sum1+=a[p];
            m2[c+1]=sum1;
            c++;
            p--;

        }
        long long int maxx=0;
        for(int i=0;i<=k;i++){
            sum2=m1[i]+m2[k-i];
            maxx=max(summ-sum2,maxx);

        }
        cout<<maxx<<endl;



    }
}