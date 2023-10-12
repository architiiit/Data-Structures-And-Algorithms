//input is a number 647
//output is all digits of this number 6 4 7

#include<iostream>
using namespace std;
void printdigits(int n)
{
    //base case
    if(n==0)
    {
    return ;
    }

    int newValueOfN=n/10;
    //baaki recursion samhaal lega
    printdigits(newValueOfN);

    //1 case mai solve krunga
    
    int digit=n%10;
    cout<<digit<<" "; 
    
}
int main()
{
    int n=647;
    if(n==0)
    cout<<0<<endl;
    printdigits(n);
return 0;
}