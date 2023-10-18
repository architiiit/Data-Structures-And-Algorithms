//Runtime Polymorphism
//Upcasting concept

#include<iostream>
using namespace std;
class Animal{
    public:
        virtual void speak(){
            cout<<"Speaking"<<endl;
        }
};
class Dog:public Animal{
    public:
        //override
       virtual void speak()
//virtual mark karna padega taaaki child class ka function call ho run time pe
        {
            cout<<"barking"<<endl;
        }
};
int main()
{ //Dynamic Object creation
    
     //Case 1

    // Animal* a=new Animal();
    // a->speak();

//case 2
    // Dog* a=new Dog();
    // a->speak();

    //UPCASTING AUR DOWNCASTING KE CASE ME AGAR VIRTUAL KEYWORD NHI USE KIYA HAI TO HAMESHA POINTER TYPE Ka method call ho raha hoga
//case 3
    //Upcasting Concept
    Animal* a=new Dog();//pointer parent class ka hai aur object Dog class ka hai
    a->speak();//is case me Anim al ka speak call hoga(pointer class hamesha call hota hai agar without virtual keyword use kiye jaa rhe hain)
    //agar animal ka speak call nhi karna hai to us function pe jaake virtual mark krna hoga

//case 4
    // // //Downcasting
    Dog* b=(Dog* )new Animal();//Zabardasti cast krna padega
    b->speak();

   

return 0;
}