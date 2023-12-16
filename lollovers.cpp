#include<iostream>

using namespace std;
int main() 
{
int n;
cin>>n;
string s;
cin>>s;
int m1[n];
int m2[n];
int c1=0;
int c2=0;
for(int i=n-1;i>=0;i--) 
{
if(s[i]=='L') {
c1++;
}
else{
c2++;}
m1[i]=c1;
m2[i]=c2;}

c1=0;
c2=0;
int k=-1;

for(int i=0;i<n-1;i++) 
{  if(s[i]=='L') {
c1++;}
else{
c2++;}
if(m1[i+1]==c1 or m2[i+1]==c2) {continue;}
else{k=i+1;
break;}


} 
cout<<k<<endl;


}