//Friend keyword in C++
//friend is used to make private data accessible to classes among them
#include<iostream>
using namespace std;
class A{
    private:
    int x;

    public:
    A(int _val):x(_val){};
    
    int getX()const 
    {
        return x;
    }
    void setX(int _val){
        x=_val;
    }
    friend class B;//ab B iske private data access kr sakta->friend class
   friend void print(const A &a);//->Friend Function
};
class B{
    public:
    void print(const A &a)
    {
        // cout<<a.getX()<<endl;
        cout<<a.x<<endl;//cannot be accessed because it is private
    }
};
//Friend function
void print(const A &a)
{
    cout<<a.x<<endl;
}
int main()
{
    A a(5);
    B b;
    b.print(a);
    //calling friend function
    print(a);
return 0;
}