#include<iostream>
using namespace std;

void solve(int arr[])
{
    cout<<"size inside function "<<sizeof(arr)<<endl;
    arr[0]=50;
    cout<<arr<<endl;
    cout<<&arr<<endl;//ye different aayega base address kyonki ye ek naya pointer hai
    //yaha pe size 8 aayega kyon ki array as a pointer pass hoga 
    //aur pointer ka size fix hota hai 
    //array pass by refernce hota hai means uska ek pointer aata hai
}
int main()
{
    
    int arr[10]={1,2,3,4};
    cout<<"size inside main function"<<sizeof(arr)<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" "; 
    }
    
    cout<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;

    cout<<"now calling function"<<endl;

    solve(arr);
    
    cout<<"wapas aane ke baad"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}