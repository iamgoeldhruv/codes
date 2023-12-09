#include<bits/stdc++.h>
using namespace std;

long long int  maxSubArraySum(long long int a[], long long int size)
{
    long long int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0 ){
            max_ending_here = 0;}
        if(i!=size-1){
            if(fabs(a[i]%2)==fabs(a[i+1]%2)){
                max_ending_here = 0;

            }
        }
    }
    return max_so_far;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int max_sum = maxSubArraySum(a, n);
        cout<<max_sum<<endl;

    }
}