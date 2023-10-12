//FINDING EXPONENT

#include<iostream>
using namespace std;
//efficient way of using when time limit exceeds 
int fastexponentiation(int a,int b)
{
int ans=1;
while(b>0)
{if(b&1)//b is odd
    {
        ans*=a;//ek extra baar multiply krna padta hai
    }
    a=a*a;
    b=b>>1;//right shift divides by 2
}
return ans;
 
}//TIME COMPLEXITY O(log b)->divide kr rhe hain is liye 

int slowexponentiation(int a,int b)
{
    int ans=1;
    for(int i=0;i<b;i++)
    {
        ans*=a;
    }
    return ans;
}//TIME COMPLEXITY O(b)
int main()
{int a,b;
cin>>a>>b;
cout<<slowexponentiation(a,b);
cout<<fastexponentiation(a,b);
}


