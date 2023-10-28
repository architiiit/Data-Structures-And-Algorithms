// Initialisation list
//const with classes
#include<iostream>
using namespace std;
class abc{
//mutable int x;
int x;
int *y;
int z;
public:
    // abc()// default constructor
    // {
    //     x=0;
    //     y=new int(0);
    // }
    // //Contructor or ctor->old style
    // abc(int _x,int _y,int _z=0)//third one is default argument
    // {
    //     x=_x;
    //     y=new int(_y);
    //     z=_z; 
    // }

    //initialisation list-->it is also helpful if variables are of const type then parametrized constructor will not work in that case
    abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){
        cout<<"inside initialisation list"<<endl;
        *y=*y*10;//this can also be reassigned but const cant be reassigned inside the curly braces
    }

    int getX() const   //it cannot remodify any variable
    {
        //x=10;//it is possible to change x value inside const if it is mutable
        return x;
    }
    void setX(int _val)
    {
        x=_val;
    }
    int getY() const
    {  
    //  int f=20;
    //     y=&f;
        return *y;
    }
    void setY(int _val)
    {
        *y=_val;
    }
    int getZ() const
    {
        return z;
    }
};
void printABC(const abc &a)
{
    //all the functions called from inside this function sholuld be const 
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
    //a.setX(10);//it will give error because it is not a const function
}

int main()
{
abc a(1,2,3);
printABC(a);
// cout<<a.getX()<<endl;
// cout<<a.getY()<<endl;
return 0;
}