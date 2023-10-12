#include<iostream>
using namespace std;
//REVERSE COUNTING
void printCounting(int n)
{//base case
    if(n==0){
        return;
    }
    //processing 
    cout<<n<<" ";

    //recursive
    printCounting(n-1);
} 


int main()
{
int n;
cin>>n;
printCounting(n);
return 0;
}

//**********************************************************

// #include<iostream>
// using namespace std;
// //FORWARD COUNTING
// void printCounting(int n)
// {//base case
//     if(n==0){
//         return;
//     }

//     //recursive
//     printCounting(n-1);

//     //processing 
//     cout<<n<<" ";
// } 

// int main()
// {
// int n;
// cin>>n;
// printCounting(n);
// return 0;
// }