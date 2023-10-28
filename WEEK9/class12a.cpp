//Virtual in C++
//can a constructor be made virtual-->NO 
#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Base ctor"<<endl;
    }
   virtual ~Base()//isko virtual banane se ye faayda hua ki derived ka destructor bhi call hua aur iska destructor bhi end me call hua
    {
        cout<<"Base dtor"<<endl;
    }

};
class Derived:public Base
{int *a;
public:
    Derived()
    {
        a=new int[1000];
        cout<<"Derived ctor"<<endl;
    }
    ~Derived()
    {
        delete[]a;
        cout<<"Derived dtor"<<endl;
    }

};

int main()
{
    Base *b=new Derived();
    delete b; 
return 0;
}