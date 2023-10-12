#include<iostream>
using namespace std;
int main()
{
    // int arr[4]={12,14,16,18};
    // cout<<arr[0]<<endl;//value
    // cout<<arr<<endl;//base address
    // cout<<&arr<<endl;//base address hi aayega
    // cout<<&arr[0]<<endl;//base address->first location

    // // //arrays ke case me arr aur &arr base address ko represent krta hai

    // // int* p=arr;
    // // cout<<p<<endl;//ye array ka base address dega
    // // cout<<&p<<endl;//ye p ka address dega 

    // cout<<*arr<<endl;//12
    // cout<<*arr+1<<endl;//12+1
    // cout<<*(arr)+1<<endl;
    // cout<<*(arr+1)<<endl;//next location ka value print hoga
    // cout<<arr[1]<<endl;
    // cout<<*(arr+2)<<endl;//2 location aage jaana hai
    // cout<<arr[2]<<endl;
    // cout<<*(arr+3)<<endl;//base address ke 3 aage wala value
    // cout<<arr[3]<<endl;

    //******************************************************
    // int i=0;
    // int arr[4]={12,14,16,18};
    // cout<<arr[i]<<endl;
    // cout<<i[arr]<<endl;//aise bhi likh sakte hain
    // cout<<*(arr+i)<<endl;
    // cout<<*(i+arr)<<endl;

    //***************************************************

    // int arr[4]={1,2,3,4};
    // //->base address ko nahi change kr skte 
    // //kyonki sochi kya symbol table 
    // //se base address change kr sakte hain??arr=arr+2;
    // int*p=arr;
    // p=p+2;

    //**************************************************
    //DIFFERENCE BETWEEN ARRAY AND POINTERS

    // int arr[4]={1,2,3,4};
    // cout<<sizeof(arr)<<endl;//4 integer ka 16 byte hoga 
    // int* p=arr;
    // cout<<sizeof(p)<<endl;//fix size hota hai pointer ka size jop system pe depend karta hai

    // cout<<sizeof(*p)<<endl;//integer ka size batayega jo 4 hota hai

    //****************************
    // char ch[10]="Babbar";
    // char* c=ch;
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;

    // cout<<&c<<endl;
    // cout<<*c<<endl;//0th index ki value
    // cout<<c<<endl;//address ki jagah poora character print ar dega bas yehi difference hai int array se
    //***************************
    // char name[10]="SherBanoo";
    // char* cptr=&name[0];

    // cout<<name<<endl;//string 
    // cout<<&name<<endl;//base address 
    // cout<<*(name+3)<<endl;//3rd index ka character
    // cout<<cptr<<endl;//poori string aayegi
    // cout<<&cptr<<endl;//cptr ka address
    // cout<<*(cptr+3)<<endl;//third index ka character
    // cout<<cptr+2<<endl;//2nd index se saari character print ho gyi
    // cout<<*cptr<<endl;//c[0]
    // cout<<cptr+8<<endl;//khaali print hoga
    //************************************
    
    // char ch='k';//isme null characer nhi hai end me but string ke case me last me automatically null character add ho jaata hai
    // //cout ki property hai ki jab tak null character nhi milta tab tak print karta hai
    // char* cptr=&ch;
    // cout<<cptr<<endl;//jaise hi null character milega ruk jaayega 

    //*****************************
    // char name[10]="babbar";
    // cout<<name<<endl;

    // char* c="babbar";//BAD PRACTICE
    // cout<<c<<endl;
    //************************************

}