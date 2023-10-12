#include<iostream>
using namespace std;

//FACTORIAL OF A NUMBER
int factorial(int n)
{   
    //base case
    if(n==1)
    return 1;
 
    int chotiProblemAns=factorial(n-1);
    int badiProblemAns=n*chotiProblemAns;

    return badiProblemAns;
}
int main()
{
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"Answer is : "<<ans<<endl;
return 0;
}