//MACROS
#include<iostream>
using namespace std;
#define PI 3.1414159265
#define MAXX(x,y)(x>y?x:y)

float circleArea(float r)
{
    return PI*r*r;
}
float circlePerimetre(float r)
{
    return 2*PI*r;
}
void fun1()
{
    int x=6;
    int b=17;
    // int c=x>b?x:b;
    int c=MAXX(x,b);
    cout<<c;
}
void fun2()
{
    int a=6;
    int b=17;
    //int c=x>b?x:b;
    int c=MAXX(a,b);
     cout<<c;
}
void fun3()
{
    int x=6;
    int y=17;
    // int c=x>b?x:b;
    int c=MAXX(x,y);
}
int main()
{
    cout<<circleArea(6.54)<<endl;
    cout<<circlePerimetre(6.54)<<endl;
    fun1();
return 0;
}