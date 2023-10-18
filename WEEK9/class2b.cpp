//Inheritence Intro

#include<iostream>
using namespace std;

//Parent class Creation
class Animal {
    public :
        int age;
        int weight;

        void eat()
        {
            cout<<"Eating"<<endl;
        }
};

//Child class creation
class Dog:public Animal{

};
int main()
{
    Dog d1;
    d1.eat();
return 0;
}