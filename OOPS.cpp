// /*#include<iostream>
// using namespace std;
// class hero{
//     private:
//     int height;
//     public:
//     int health;
//     char name;
//     char level;
   
//     void setheight(int h)
//     {
//         height=h;
//     }
//     int getheight()
//     {
//         return height;
//     }
// };
// int main()
// {
//     //hero h1;
//     hero *h1=new hero;
//     cout<<"size of h1"<<sizeof((*h1));
//     cout<<"name is"<<(*h1).name<<endl;
//     cout<<"level is"<<(*h1).level<<endl;
//     (*h1).setheight(5);
//     cout<<"height is"<<(*h1).getheight();
    

// }*/
// /*#include <iostream>
// using namespace std;
// class Grade_book // class definition
// {
// public: // access specifier
// // appears after access specifier public: to indicate function is available to the public
// void display_msg() // member function to display message
// {
//     cout <<"Welcome to gradebook"<< endl;
// }
// }; // class definition ends. Notice the semi colon
// int main(){
// Grade_book first_course; // create a class object. Can create many such objects
// // first_course is a variable type of grade_book
// first_course.display_msg(); // looks familiar?
// }*/
// //#include<iostream>
// //using namespace std;
// //class dhruv
// /*{
//     public:
//     int s;
//     void ar(int c[])
//     {
//         for(int i=0;i<s;i++)
//         {
//             cout<<c[i]<<endl;
//         }
//     }
//     void all0(int c[])
//     {
//         for(int i=0;i<s;i++)
//         {
//             c[i]=0;
//         }

//     }
// };
// int main()
// {
//     dhruv h;
//     h.s=3;
//     int c[3]={2,3,4};
//     h.ar(c);
//     h.all0(c);
//     h.ar(c);
//     return 0;
// }*/
// /*{
//     public:
//     int a;

// };
// int main()
// {
//     dhruv h;
//     h.a=5;
// }*/
// //NESTNG OF MEMBER FUNCTIONS;
// /*{
//     private:
//     bool check(int);
    
   
//     public:
//     int a;
//     void nfactor(int );

// };
// void dhruv::nfactor(int a)
// {
//     if(check(a))
//     {

    
//     cout<<"nfactor is"<<a/2;
//     }

// }
// bool dhruv::check(int a)
// {
//     if(a%2==0)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// int main()
// {
//     dhruv d;
    
//     d.a=5;
//     d.nfactor(d.a);

// }*/
// /*#include<iostream>
// using namespace std;
// class abc{
//     public:
//     string a;
//     string b;
//     int c;
//     public:
//    /*abc(string x,string y,int z)
//     {
//         a=x;
//         b=y;
//         c=z;


//     }
//     abc(string x)
//     {
//         a=x;
//     }
//     abc(void)
//     {
        
//     }*/
//    /* void getvalue(string x,string y,int z)
//     {
//         a=x;
//         b=y;
//         c=z;


//     }


// };
// int main()
// {
//     // abc o1("dhruv","male",19);
//     // abc o2("saksham");
//     // abc o3;
//     // cout<<o1.a<<o1.b<<o1.c<<endl;
//     // cout<<o2.a<<o2.b<<o2.c<<endl;
//     // cout<<o3.a<<o3.b<<o3.c;
//     abc o;
//     o.getvalue("d","s",3);
    
    
//     cout<<o.a<<o.b<<o.c;//*/

// #include <iostream>
// using namespace std;
// /* abcd{
//     int a;
//     public:
//     abcd(int m)
//     {
//         a=m;
//     }
// };
// int main()
// {
//    abcd x=abcd(5);
// }
// //copy constructor code begins from here;
// class constr{
//     int n;
//     int p;
//     public:
//     constr(int a,int b)
//     {
//         cout<<"constructor called"<<endl;
//         n=a;
//         p=b;

//     }
//     void getvalue();
//     constr(constr &temp)
//     {
//         n=temp.n;
//         p=temp.p;

//     }
//     ~constr()
//     {
//         cout<<"DESTRUCTOR CALLED"<<endl;
//     }
// };
// void constr::getvalue()
// {
//     cout<<"THE VALUE OF N IS"<<n<<endl;
//     cout<<"THE VALUE OF P IS"<<p<<endl;
// }
// int main()
// {
//     constr ob1(3,5);
//     ob1.getvalue();
//     constr ob2(ob1);
//     ob2.getvalue();
//     constr *ob3=new constr(3,5);
//     delete ob3;

// }*/
// /*class Car {
// public:
// string brand;
// string model;
// int year;
// Car(string x, string y, int z) { // Constructor with parameters
// brand = x;
// model = y;
// year = z;
// cout << "Constructor runs for car year " << z << endl
// ;

// }
// ~Car(){
// cout << "Destructor called for car year " << year << endl;
// }

// };

// void create(void) {
// Car second("BMW", "X5", 2000); // local object in function
// Car third("BMW", "X5", 2001); // local object in function
// }

// Car first("BMW", "X5", 1999); // global object
// Car sixth("gaadi","o9",3000);

// int main() {
// create(); // call function to create objects
// Car fourth("BMW", "X5", 2002);
// Car fifth("audi","r5",3001);
// return 0;
// }*/
// /*class Lin_alg_lib {
// public:
// void input_size(int s){
// size_array = s;
// cout << "Using the arrow operator: " << endl
// ;

// cout << this->size_array << endl
// ;

// cout << "Using the dereferencing operator: " << endl
// ;

// cout << (*this).size_array << endl
// ;

// }
// void msg(){
// cout << "address of the object is: " << this << endl
// ;

// }
// private:
// int size_array
// ;

// };
// int main() {
// Lin_alg_lib var_ops;

// var_ops.msg(); 
// cout<<&var_ops<<endl;
// var_ops.input_size(3);
// Lin_alg_lib var_ops2;
// var_ops2.msg();
// var_ops2.input_size(4);
// };*/
// /*class alpha{
//     const int v;
//     public:
//     //void initialize(int);
//     void getvalue(){
//         cout<<"value of v is"<<v<<endl;
//     }
//     alpha(int x)
//     {
//         v=x;
//     }

// };
// //void alpha :: initialize(int x)

//     //v=x;

// int main()
// {
//     alpha a(10);
//     //a.initialize(10);
//     a.getvalue();
//     return 0;*/
// /*class Car{
    
//     string brand;
//     string model;
//     public:
//     int year;
//     Car(string x, string y, int z) {
//     brand = x;
//     model = y;
//     year = z;
//     }
//     string get_brand() const{
//     return brand; }
//     void print_brand() const{
//     cout << brand << endl; }
//     void set_brand(string s) const   { // declaring this as const is not allowed brand = s; }
//     }

// };
// int main() {
// const Car carObj1("BMW", "X5", 1999); // const object
// //carObj1.year = 2000;
// //const Car carObj1("BMW", "X5", 1999); // const object
// //carObj1.year = 2000;
// carObj1.set_brand("Honda");
// carObj1.get_brand();
// carObj1.print_brand();
// Car carObj2("Honda", "Civic", 2003); // non-const object
// carObj2.get_brand();
// carObj2.print_brand();
// return 0;
// }*/
// class Car {
// public:
// int year;
// Car(string x, string y, int z) { // Constructor with parameters
// brand = x;
// model = y;
// year = z;
// numcars++;
// }
// static void getcars() 
// { // access to only static data members
// cout << "Number of cars: " << numcars;
// //cout << “Year of the car is: ” << year; //give error }
// }
// ~Car(){
// cout<<"DESTRUCTOR CALLED"<<endl;
// numcars--;
// }


// private:
// string brand;
// string model;
// static int numcars; // can not be initilized here
// };
// int Car::numcars=10;
// int main(){
    
//     {
//     Car obj1("a","b",5);
//     }
//     {
//     Car obj2("e","b",5);
//     }
//     {
//     Car obj3("e","f",5);
//     }
//     Car ::getcars();

// }
//code for friend function
//#include<iostream>
//using namespace ;
// class complex{
//     friend void sum(complex &o3,complex &o4);
//     int a,b;
//     public:
//     void getvalue(int c,int d)
//     {
//         a=c;
//         b=d;
//     }
//     void printno()
//     {
//         cout<<"the required complex no. is"<<a<<" + "<<b<<"i"<<endl;
//     }

// };
// void sum(complex &o3,complex &o4)
// {
//     complex o5;
//     o5.getvalue((o3.a+o4.a),(o3.b+o4.b));
//     o5.printno();
// }
// int main()
// {
//     complex o1,o2;
//     o1.getvalue(3,5);
// //     o1.printno();
// //     o2.getvalue(4,6);
// //     o2.printno();
// //     sum(o1,o2);
// // }
// class Car {
// public:
// string brand;
// string model;
// int year;
// Car(string x, string y, int z) { // Constructor with parameters
// brand = x;
// model = y;
// year = z;
// cout << "Constructor runs for car year " << z << endl;



// }
// ~Car(){
// cout << "Destructor called for car year " << year << endl
// ;

// };
// };
// void create(void) {
// Car second("BMW", "X5", 2000); // local object in function
// Car third("BMW", "X5", 2001); // local object in function
// }

// Car first("BMW", "X5", 1999); // global object

// int main() {
// create(); // call function to create objects
// Car fourth("BMW", "X5", 2002);
// return 0;
// }
// class Car {

// string brand;
// string model;
// int year;
// public:
// Car(){
// cout << "No arguments constructor called " << endl;
// brand = "BMW";
// model = "X5";
// year = 2016;
// }
// Car(Car &o)
// {
//     brand=o.brand;
//     model=o.model;
//     year=o.year;
// }
// void getvalue()
// {
//     cout<<brand<<model<<year;
// }
// };

// //More on Constructors



// int main() {

// Car carObj1;
// carObj1.getvalue();
// Car carObj2(carObj1);
// carObj2.getvalue();


// return 0;
// }
// class
// class Car { // The class
// public:
// Car(string x, string y, int z) { // Constructor with parameters
// brand = x;
// model = y;
// year = z;
// }
// friend void fCar::set_brand(Car &,string); //declared a friend class
// void print_brand(){
// cout << brand << endl;
// }
// private:
// string brand;
// string model;
// int year;
// };
// class fCar {
// public:
// void set_brand(Car &c, string s){
// c.brand = s;
// }
// };
// int main() {
// Car carObj1("BMW", "X5", 1999);
// fCar fcarObj2;
// fcarObj2.set_brand(carObj1, "Honda");
// carObj1.print_brand();
// return 0;
// }
// 
// #include<iostream>
// using namespace std;
// class arrray{
//     double *arrptr{nullptr};
//     int size;
//     public:
//     arrray(int s)
//     {
//         size=s;
//         arrptr=new double[size];
//         for(int i=0;i<s;i++){
//             cout<<"enter the value"<<endl;
//             cin>>arrptr[i];
//         }

//     }
//     arrray()
//     {
//         arrptr=new double[5];
//         {
//             for(int i=0;i<5;i++)
//             {
//                 cout<<"enter the value of aray"<<endl;
//                 cin>>arrptr[i];
//             }
//         }
//     }
//     void operator=(arrray &o2)
//     {
//         if(size!=o2.size)
//         {
//             delete [] arrptr;
//             size=o2.size;
//             arrptr=new double[o2.size];
//         }
//         for(int i=0;i<5;i++){
//             arrptr[i]=o2.arrptr[i];
//         }
        

//     }
//     void show()
//     {
//         for(int i=0;i<size ;i++)
//         {
//             cout<<arrptr[i];
//         }
//     }
// };
// int main()
// {
//     arrray o1,o2(6);
//     {
//         o1=o2;
//         o1.show();
//         o2.show();
//     }
// }
#include<iostream>
#include<vector>
using namespace std;
class vector{
    vector<int>v;
    int size;
    public:
    vector(int s)
    {
        size=s;
    }
    void getvalue()
    {
        for(int i=0;i<size i++)
        {
            int x;

            cout<<"enter value of "<<i+1<<"term of vector"<<endl;
            cin>>x;
            v.push_back(x);

            
        }

    }
    vector operator+(vector &b)
    {
        for(int i=0;i<v.size();i++)
        {
            vector sum;
            sum.v.push_back(v[i]+b.v[i]);
            return sum;
        }



    }
    void showvector()
    {
        for(int i=0;i<v.size;v++)
        {
            cout<<v[i]<<" ";
        }
    }
    
    

}
int main()
{
    vector a(3),b(3),c(3),dot(3),cross(3);
    cout<<"constructing vector a;"<<endl;
    a.getvalue();
    cout<<"construcing vector b"<<endl;
    b.getvalue();
    c=a+b;
    cout<<"the value of sum is"<<c.showvector()<<endl;
    
}