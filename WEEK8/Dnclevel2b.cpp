//permutations of a string
#include<iostream>
using namespace std;
void printPermutation(string& str,int i)//backtracking sikhane ke liye string ko pass by reference kiya hai
{
    //base case
    if(i>=str.length())
    {
        cout<<str<<" ";
        return;
    }

    //swapping
    for(int j=i;j<str.length();j++)
    {
        //swap
        swap(str[i],str[j]);
        //recall
        printPermutation(str,i+1);

        //backtracking-Why??-To re create the original string
        swap(str[i],str[j]);
    }
}
int main()
{
string str="abc";
int i=0;
printPermutation(str,i);
return 0;
}