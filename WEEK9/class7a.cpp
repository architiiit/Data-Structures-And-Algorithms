//static keyword in class
#include<iostream>
using namespace std;
class abc{
    public:
       static int x,y;

        // void print()const 
        // {    //this is a pointer which belongs to particaular instance
        //     cout<<this->x<<" "<<this->y<<endl;
        // }
        static void print() //ye saare instances me common hoga
        {    //this is a pointer which belongs to particaular instance
            cout<<x<<" "<<y<<endl;
        }
};
//us class ke saare instances variables ke ek hi copy ko share karenge
int abc::x;
int abc::y;
//ye ab saare objects ke liye same hoga
int main()
{
    abc obj1;
    //another way to initialise
    // abc obj1={1,2};
    obj1.x=1;
    obj1.y=2;
    obj1.print();
    abc obj2;
    // abc obj2={10,20};
    obj2.x=10;
    obj2.y=20;
    obj1.print();
    obj2.print();
return 0;
}