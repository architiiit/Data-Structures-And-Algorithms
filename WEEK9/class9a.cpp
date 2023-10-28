//Inline functions ->generally used to avoid function call agaian and again
//the inline function is replaced by code written in function instead of calling function and adding it to function call stack
//function calling overhead badhti hai
//hamesha small function me use krna hai
//agar bade function ko inline krenge to executable ka size bohot badh jaayega
#include<iostream>
using namespace std;

inline void numberShow(int num)
{
    cout<<num<<endl;
}

int main()
{
    numberShow(10);//actually saare functions replace ho gye honge  cout<<num<<endl; se
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
return 0;
}