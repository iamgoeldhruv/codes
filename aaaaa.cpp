// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10 ;
//     int z=11;
    
//     int *c=&a;
//     int *e=&z;
// ;
    
//     cout<<*(c+1);

// }
// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
class veector{
    public:
    int vx;
    int vy;
    int vz;
  
    veector();
    veector(int a,int b,int c){
        vx=a;
        vy=b;
        vz=c;
        
    }
    veector operator+(veector &b)
    {
        veector sum;
        sum.vx=vx+b.vx;
        sum.vy=vy+b.vy;
        sum.vz=vz+b.vz;
        return sum;
        
        
    }
    void showvector()
    {
        cout<<"the added vector is"<<vx<<","<<vy<<","<<vz<<endl;
    }
};
int main()
{
    veector c,dot,cross, a(1,2,3),b(4,5,6);
    c=a+b;
    c.showvector();
    return 0;
    
}