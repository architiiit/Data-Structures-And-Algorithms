#include<iostream>
using namespace std;

class abc{
    public:
        int x;
        int *y;

        abc(int _x,int _y):x(_x),y(new int(_y)){}//initialisation list
      
        //default dumb copy constructor:it does SHALLOW COPY
        //ye nhi bhi define krenge to bhi compiler khud se bana deta hai
        abc(const abc &a)
        {
            this->x=a.x;
            this->y=a.y;
        }

        //OUR SMART DEEP COPY
        // abc(const abc &a)
        // {
        //     this->x=a.x;
        //     this->y=new int(*a.y);//a ke y ki value uthai aur usko ek nayi location pe point krwai
        // }

        void print() const
        {
            printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n",x,y,*y);
        }
        ~abc()
        {
            delete y;
           // cout<<"destructor called"<<endl;
        }
};
int main()
{
    // abc a(1,2);
    // cout<<"printing a"<<endl;
    // a.print();

    // cout<<"printing b"<<endl;
    // abc b=a;//call hota hai copy constructor
    // b.print();

    // cout<<"printing b"<<endl;
    // *b.y=20;
    // b.print();

    // cout<<"printing a"<<endl;
    // a.print();

//*************************************************
abc *a=new abc(1,2);
abc b=*a;//shallow copy
delete a;//a ka destructor call hoga aur y delete kr rhe hain
b.print();//y to delete ho chuka hai already a se aur fir se destructor call hua hoga b ke liye to same location se 2 baar delete ho raha hai
return 0;
}