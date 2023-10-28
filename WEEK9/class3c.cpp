//Runtime Polymorphism
//Constructor concept

#include<iostream>
using namespace std;
class Animal{
    public:
        Animal()
        {
            cout<<"I am inside animal constructor "<<endl;
        }
        void speak(){
            cout<<"Speaking"<<endl;
        }
};
class Dog:public Animal{
    public:
        Dog()
        {
            cout<<"I am inside Dog constructor "<<endl;
        }
        //override
        virtual void speak()
        //virtual mark karna padega taaaki child class ka function call ho run time pe
        {
            cout<<"barking"<<endl;
        }
};
int main()
{ 
    // Animal* a=new Animal();//single constructor call hoga
    // Dog* b=new Dog();//is case me dono constructor call ho raha hai kyonki parent se inherit ho raha hai jo ki normal hai
    // Animal* c=new Dog();//same type se dono constructor call honge
    // Dog* d=(Dog* )new Animal();//is case me sirf animal call hoga kyonki animal kisi pe depend nhi karta

    // BASICALLY RHS PE HI DEPEND KREGA AGAR DOG HAI TO DONO CALL HOGA Agar animal hai to sirf ek hi call hoga
    //Pointer sirf represent kr rhe hain uska constructor call se koi dependencty nhi hai
return 0;
}