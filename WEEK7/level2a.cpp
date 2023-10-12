//count stairs
// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;

int climbStairs(int n)
{
    //base condition->stopping condition
    if(n==0||n==1)
    { 
        return 1;
    }
    int ans=climbStairs(n-1)+climbStairs(n-2);
    return ans;

}

int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int ans=climbStairs(n);
cout<<"Answer is :"<<ans<<endl;
return 0;
}