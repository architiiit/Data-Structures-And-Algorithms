//Inheritence continued
//CASE 2 ->Base class is private==All are not accessible (Public->NA) (Protected->NA) (Private->NA)

#include<iostream>
using namespace std;

//Parent class Creation
class Animal {
    private :
        int age;
};

//Child class creation
class Dog:public Animal{
    public:
    void print()
    {
        cout<<this->age<<endl;
    }
};
int main()
{
    Dog d1;
    //cout<<d1.age<<endl;//outside access kr rhe hain
    //d1.print();//means inside access kr skte hain
return 0;
}