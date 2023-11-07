#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int sum[n];
        long long int summ=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            

            
        }
        if(n==1){
            long long int x=0;
            if(a[0]%2==0){
                x=a[0]/2;
            }
            else{
                x=a[0]/2+1;
            }
            if(a[0]==1){
                cout<<1<<endl;
                continue;
            }
            
           
            cout<<x+1<<endl;
            continue;
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            summ+=a[i];
            sum[i]=summ;
        }
        long long int c=0;
        long long int summ1=0;
        for(int j=n-1;j>=0;j--){
            summ1+=a[j];
            if(summ1<sum[j-1]){
                c++;
                continue;
            }
            if(summ1==sum[j-1]){
                c+=summ1+1;
                break;
            }
            if(summ1>sum[j-1]){
                c+=sum[j-1];
                long long int y=sum[j];
                long long int w=summ1-a[j];

               
                
                    long long int p=(summ1-sum[j-1]);
                    long long int z;
                    if(p%2==0){
                         z=p/2;
                    }
                    else{
                      z=p/2+1;
                    }

                    
                    c+=z+1;
                if(y-w==1){
                    c--;
                }
                break;
            }
        }
        cout<<(c)<<endl;
        

        
           
           


        


        
    }
}
        
