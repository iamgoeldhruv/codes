#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
  if (a == 0) 
    return b; 
  return gcd(b % a, a); 
} 
  

long long int findGCD(long long int arr[], long long int n) 
{ 
 long long int result = arr[0]; 
  for (int i = 1; i < n; i++) 
  { 
    result = gcd(arr[i], result); 
  
    if(result == 1) 
    { 
    return 1; 
    } 
  } 
  return result; 
} 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        map<long long int,long long int>m;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        sort(a,a+n);
        long long int diff[n-1];
        for(int i=0;i<n-1;i++){
            diff[i]=a[n-1]-a[i];

        }
        long long int gc=findGCD(diff,n-1);
        long long int c=0;
        for(int i=0;i<n-1;i++){
            c+=diff[i]/gc;

        }
        long long int w=a[n-1];
        int flag=0;
        while(w>=a[0]){
            w-=gc;
            if(m[w]==0){
                c+=(a[n-1]-w)/gc;
                flag++;
                break;
            }

        }
        if(flag==0){
            cout<<c+n<<endl;
        }
        else{
            cout<<c<<endl;
        }
        
    }
}