//reference variable concept
#include<iostream>
using namespace std;

//pass by refernce concept
void solve(int& val)//refernce variable
{
    val++;//direct location pe change hoga
}

int main()
{
//     int a=5;
// //creting refernce variable
//     int&b=a;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     a++;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     b++;
//     cout<<a<<endl;
//     cout<<b<<endl;

    //same memory location different names
    //reference variable null ko point nhi krte hain
    //pass by reference ke liye use kiya jaata hai
//*******************************
int a=5;
solve(a);
cout<<a<<endl;
return 0;
} 