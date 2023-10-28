//Const Keyword ,Initialisation list,MACROS
#include<iostream>
using namespace std;

int main()
{
    //const int x=5;//x is constant
    //initialisation can be done but we cant re-assign a value
    //x=10;//we will get error
    //cout<<x<<endl;

//*************************

//2.Const with pointers
// if we write const before * then content is const but pointer can be reassignned
//     const int *a=new int(2);//Const data,NON_CONST POINTER->means pointer can be changed
//     int const *a=new int(2);//same way to write above line
//     cout<<*a<<endl;
//    // *a=2;//cannot reassign content of pointer in const but pointer can be reassigned
//     cout<<*a<<endl;
//    // delete a;//to avoid memory leak we need to delete a before reinitialising it
//     int b=5;
//     a=&b;//pointer can be reassigned
//     cout<<*a<<endl;
     
// //3.Const Pointer,but non-const data
// int *const a=new int(2);
// cout<<*a<<endl;
// *a=20;//content can be changed
// cout<<*a<<endl;
// int b=50;
// //a=&b;//nhi chalega,Const pointer

//4.Const pointer,const data
// const int *const a=new int(10);
// int const *const a=new int(10);
// cout<<*a<<endl;
//*a=50;//not possible
// int b=100;
// a=&b;//not possible

return 0;
}