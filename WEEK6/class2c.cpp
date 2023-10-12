#include<iostream>
using namespace std;

void update(int* ptr)
{
    cout<<"address stored inside p is :"<<ptr<<endl;
    cout<<"address of ptr is "<<&ptr<<endl;//alag se naya pointer hai
    *ptr=*ptr+10;
}
int main()
{
    int a=5;
    cout<<"address of a is "<<&a<<endl; 
    int* ptr=&a;
    cout<<"address stored in ptr is:"<<ptr<<endl;
    update(ptr);
    cout<<"value of a is "<<a<<endl;
}