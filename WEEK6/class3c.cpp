#include<iostream>
using namespace std;

void solve(int** ptr)//copy create hota hai with same value but different location pe hota hai
{
//    ptr=ptr+1;//no change
//    *ptr=*ptr+1;//no change
   **ptr=**ptr+1;//ab value change hogi  a ki
}
int main()
{
    int x=12;
    int* p=&x;
    int** q=&p;
    solve(q);
    cout<<x<<endl;

return 0;
} 