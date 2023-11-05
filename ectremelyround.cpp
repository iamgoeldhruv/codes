#include<bits/stdc++.h>
using namespace std;
// bool check(long long int i){
//     int c=0;
//     while(i!=0){
//         int b=i%10;
//         if(b!=0){
//             c++;
//         }
//         i/=10;
//     }
//     if(c==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        int i=1;
        int z=0;
        while(i<=n){
            if(i<10){
                i++;
                z++;
            }
            else if(i<100){
                i+=10;
                z++;
            }
            else if(i<1000){
                i+=100;
                z++;
            }
            else if(i<10000){
                i+=1000;
                z++;
            }
            else if(i<100000){
                i+=10000;
                z++;
            }
            else if(i<1000000){
                i+=100000;
                z++;
            }

        }
       
        cout<<z<<endl;
    }
}