//LOCAL VS GLOBAL VARIABLES
#include<iostream>
using namespace std;
int x=2;//Global variable
void fun()
{
    int x=60;
    cout<<x<<endl;
    ::x=40;
    cout<<::x<<endl;
}

int main()
{   ::x=4;//global x ko access kr rha hai
    int x=20;//local to main function
    cout<<x<<endl;//agar global aur local dono hain to local ko jyaada preference milega
    cout<<::x<<endl;//accessing global with ::

    {
        int x=50;
        {
            int x=44;
            cout<<x<<endl;
            cout<<::x<<endl;
        }
        cout<<x<<endl;//most local print hoga
        cout<<::x<<endl;//global accessible
    }
fun();
    cout<<x<<endl;
return 0;
}
