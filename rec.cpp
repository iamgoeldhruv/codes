#include<iostream>
using namespace std;
char alpha(int x)
{
    if(char(x)=='Z')
    {
        return 'Z';
    }
    else{
        cout<<char(x)<<"    ";
        alpha(x+1);
        
        

        


    }
    


    

}
int main()
{
    int x=int('A');
    
    
    cout<<alpha(x);
    
    return 0;
}