//Encapsulation 
#include<iostream>
using namespace std;

//Encapsulation 

class Animal
{
    private://full encapsulation me saara data members private hota hai
        int age;
        int weight;

    public:
        void eat(){
            cout<<"Eating"<<endl;
        }
        //We use getters and setters for private data
        int getAge(){
            return this->age;
        }
        int setAge(int age)
        {
            this->age=age;
        }
};
int main()
{

return 0;
}