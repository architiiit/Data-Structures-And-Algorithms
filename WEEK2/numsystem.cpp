#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinary(int n)
{int binary=0;
int i=0;
    while(n>0)
    {   int bit=n%2;
        binary=bit*pow(10,i)+binary;
        n=n/2;
        i++;
    }
return binary;
}

int binarytodecimal(int n)
{
    int decimal=0;
    int i=0;
    while(n)
    {int bit=n%10;
        decimal=decimal+bit*pow(2,i);
        n=n/10; 
        i++;
    }
    return decimal;
}

int main()
{
int n;
cin>>n;
// int binary=decimaltobinary(n);
// cout<<binary<<endl;
int decimal=binarytodecimal(n);
cout<<decimal<<endl;
}