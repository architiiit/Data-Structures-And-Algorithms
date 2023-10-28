//static keyword in class
#include<iostream>
using namespace std;
class abc{
    public:
      int x,y;
       abc():x(0),y(0){}
        // void print()const 
        // {    //this is a pointer which belongs to particaular instance
        //     cout<<this->x<<" "<<this->y<<endl;
        // }
        static void print() //ye saare instances me common hoga
        { //sirf static variables hona chahiye non static agar hoga to vo particular instance se srelate kr rha hoga to vo nhi chalega 
        //this->x cannot be accessed
            printf("I am in static %s\n",__FUNCTION__);//__FUNCTION__prints function name only
        }
};
int main()
{
    //print function saare instances me common hoga is liye isko aise likh sakte hain
    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
    abc::print();
return 0;
}