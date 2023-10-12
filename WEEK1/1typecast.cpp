#include <iostream>
using namespace std;
int main()
{

//// HOW TO USE NAMESPACE STD

   // std::cout<<2;
   // cout<<"namaste bharat";
   // cout<<'\n';

//// TAKING INPUTS FROM USER

//    cout << "enter a number" << endl;
//    int a;
//    cin >> a;
//   cout << "you entered " << a << endl;
   int a=4;
   cout << "you entered a as " << a << endl;
   cout<<sizeof(a)<<endl;

   long long b=4;
   cout << "you entered b as " << b << endl;
   cout<<sizeof(b)<<endl;

   char ch=255;
   cout << "you entered ch " << ch << endl;
   cout<<sizeof(ch)<<endl;

   bool flag =true;
   cout<<"you entered bool "<< flag <<endl;
   cout<<sizeof(flag)<<endl;

   //IMPLICIT TYPE CASTING
   char c=97;
   cout<<c<<endl;
   int num='b';
   cout<<num<<endl;


   //EXPLICIT TYPE CASTING
   double d=5.7;
   int x=(int)d+2;
   cout<<x<<endl;

   return 0;
}