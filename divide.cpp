#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long int a[],long long int n)
{
    // Map to store the power of prime factors
    map<long long int, long long int> freq;
 
    // Loop to implement the concept
    // of Sieve of Eratosthenes
    for (int i=0;i<n;i++){
        long long int x=a[i];
        for (int i = 2; i <= sqrt(x); i++) {
            while (x > 1 and x % i == 0) {
                freq[i]++;
                x /= i;
            }
            
        }
        if (x >= 1)
            freq[x]++;
    }
 
    for (auto it = freq.begin();
         it != freq.end(); it++)
        if (it->second % 2)
            return false;
 
    return true;
}
int main(){
    long long int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;
       long long int a[n];
        long long int z;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        isPerfectSquare(a,n)
        ? cout << "YES\n"
        : cout << "NO\n";
    
     
        

    }
}