#include<iostream>
using namespace std;

int util(int* p)//ye pass by value hai matlab copy hoga
{
    //p=p+1;   //ye p alag address pe hai 
   *p=*p+1;   //iska matlab us location ka vaue me +1 krna hai
}

int main()
{
    int a=5;
    int* p=&a;
    cout<<"before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl; 

    util(p);

    cout<<"after"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    
    return 0;
}