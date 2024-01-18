//Inheritence continued
//CASE 1:When base class is (public + Public->Public) (public+Protected->Protected) (public+Private->Private)

#include<iostream>
using namespace std;

//Parent class Creation
class Animal {
    public :
        int age;
};

//Child class creation
class Dog:protected Animal{
    public:
    void print()
    {
        cout<<this->age<<endl;
    }
};
int main()
{
    Dog d1;
    // cout<<d1.age;//outside access kr rhe hain
    d1.print();//means can be asseced inside class 
return 0;
}