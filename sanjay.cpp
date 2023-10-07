#include<iostream>
using namespace std;
int main()
{
     int a=45;
     bool barray[32]; 
     for(int i=31;i>=0;i--)
     {

          barray[i]=a%2;
          a/=2;
     }
     for(int i=0;i<=31;i++)
          {
               cout<<barray[i]<<" ";
          }
     return 0;
     
}
