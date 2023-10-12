//POINTERS

#include<iostream>
using namespace std;
int main()
{
    // int a=5;
    // int b=5;
    // cout<<a<<endl;
    // cout<<&a<<endl;//address of storage location
    // cout<<&b<<endl;//address of storage location
    //->both of them will have different address although they are having same values


    // int a=5;
    // //pointer create
    // int* ptr=&a; //address store krne ke liye pointer use krte hain

    // //access the value ptr is pointing to
    // cout<<"Address of a is "<<&a<<endl;
    // cout<<"Value stored at ptr is"<<ptr<<endl;//prints address
    // cout<<"Value is pointing to " <<*ptr <<endl;//derefernce operator to print value at location stored in ptr
    // cout<<&ptr <<endl;//address of ptr wala dabba  
////*********************************************************
    //*ptr->value stored at location in ptr
    //&ptr->address of ptr
    //&a-> address of a
    //a->values odf a
    //ptr->value of ptr
////***********************************************************
// int a=5;         int* p=&a;                 //pointer to int data
// cout<<sizeof(p)<<endl;

// char ch='b';     char* c=&ch; //pointer to char data
// cout<<sizeof(c)<<endl;

// double d=103;    double* dtr=&d;  //pointer to double data 
// cout<<sizeof(dtr)<<endl;

// // SIZE OF POINTER IS ALWAYS SAME BECAUSE IT IS ONLY STORING ADDRESS -> IT DOES NOT DEPENDS ON DATA TYPE
// //SIZE ALSO DEPENDS ON SYSTEM TO SYSTEM BUT ALWAYS REMAIN SAME

// //*******************************
// // ONLY POINTER DECLARATION IS A BAD PRACTICE IT GIVES SEGMENTATION FAULT
// int* ptr;//BAD PRACTICE
// cout<<*ptr<<endl;//garbage value at garbage address


// int* ptr=0;//NULL POINTER

// int* ptr=NULL;//NULL POINTER

// int* ptr=nullptr;//NULL POINTER

// cout<<*ptr<<endl;//SEGMENTATION FAULT->apni memory dekho dusre ki mat chero
//CANNOT DEREFERENCE A NULL ADDRESS
//******************************************
// //kya ek pointer dusre pointer ko copy kr sakta hai??
// int a=5;
// int* ptr =&a;
// int* dusraptr=ptr;//pointer ko copy kr diya hai

// cout<<*ptr<<endl;
// cout<<*dusraptr<<endl;
//***********************************************8
// int a=10;
// int* p=&a;
// int* q=p;
// int* r=q;

// cout<<a<<endl;//10
// cout<<&a<<endl;//address of a
// cout<<p<<endl;//address of a
// cout<<&p<<endl;//address of p
// cout<<*p<<endl;//10
// cout<<q<<endl;//address of a
// cout<<&q<<endl;//address of q
// cout<<*q<<endl;//10
// cout<<r<<endl;//address of a
// cout<<&r<<endl;//address of r
// cout<<*r<<endl;//10
// cout<<(*p+*q+*r)<<endl;//10+10+10
// cout<<(*p)*2+(*r)*3<<endl;//20+30
// cout<<(*p/2)-(*q)/2<<endl;//5-5

// //**************************************
// int a=10;
// int* p=&a;
// int* q=p;
// int* r=q;

// cout<<a<<endl;
// cout<<&a<<endl;
// cout<<p<<endl;
// cout<<&p<<endl;
// cout<<*p<<endl;
// cout<<q<<endl;
// cout<<&q<<endl;
// cout<<*q<<endl;
// cout<<r<<endl;
// cout<<&r<<endl;
// cout<<*r<<endl;
//**********************************************************
      return 0;
}