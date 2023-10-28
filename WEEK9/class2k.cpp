//POLYMORPHISM->function overloading
#include<iostream>
using namespace std;
class Maths{
    public:
        int sum(int a,int b)
        {   
            cout<<"I am, in first Signnature "<<endl;
            return a+b;
        }
        int sum(int a,int b,int c)
        {
            cout<<"I am, in second Signnature "<<endl;
            return a+b+c;
        }
        int sum(int a,float b)
        {
            cout<<"I am, in third Signnature "<<endl;
            return a+b;
        }
        //return type of functions shopuld be same only variables type or number of parametres should be changed
        //sum function is existing in multiple forms-->This is Polymorphism 
};
int main()
{
    Maths obj;
    cout<<obj.sum(2,5)<<endl;
    cout<<obj.sum(2,5,3)<<endl;
    cout<<obj.sum(2,5.12f)<<endl;//f ->telling that it is float
    
return 0;
}