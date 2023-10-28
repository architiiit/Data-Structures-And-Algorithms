//*********************************************
//PASS BY REFERENCE OF POINTERS
// #include<iostream>
// using namespace std;
// void solve(int*& p)//passby reference of pointer
// {
//     p=p+1;
// }
// int main()
// {
// int a=5;
// int* p=&a;
// cout<<"before"<<p<<endl;
// solve(p);
// cout<<"after"<<p<<endl;
// return 0;
// }

// //return by reference
#include<iostream> 
using namespace std;

int* solve()
{int a=5;
int* ans=&a;
cout<<ans<<endl;
cout<<&ans<<endl;
return ans;
}
int main()
{
    cout<<solve()<<endl;
    return 0;
}
