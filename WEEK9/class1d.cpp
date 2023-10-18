//Destructors 
//Constructors
#include<iostream>
using namespace std;



class Animal{

    private:
    int weight;

    public:
    //iske neeche saara data public ho jaayega
    //state or Properties
    int age;
    string type;

    //default Constructors
    //used for initialisation
    // Animal()
    // {
    //     this->weight=0;
    //     this->age=0;
    //     this->type="";
    //    cout<<"Constructor called "<<endl;
    // }

    // //Parametrised constructor
    // Animal(int age)
    // {
    //     this->age=age;
    //     cout<<"Parametrised constructor called of one parametre"<<endl;
    // }
    // Animal(int age,int weight)
    // {
    //     this->age=age;
    //     this->weight=weight;
    //     cout<<"Parametrised constructor called of 2 parametres"<<endl;
    // }
    // Animal(int age,int weight,string type)
    // {
    //     this->age=age;
    //     this->type=type;
    //     this->weight=weight;
    //     cout<<"Parametrised constructor called of 3 parametres"<<endl;
    // }

    // //Copy constructor
    // Animal(Animal &obj)//infinite loop se bachane ke liye pass by reference karte hain
    // {
    //     this->age=obj.age;
    //     this->type=obj.type;
    //     this->weight=obj.weight;
    //     cout<<"we are inside copy constructor"<<endl;
    // }
    
    // Destructor
    ~Animal()
    {
        cout<<"I am inside destructor"<<endl;
    }

    //behaviour-->Functions or JAVA-->Methods
    void eat()
    {
        cout<<"Eating "<<endl;
    }
    void sleep() 
    {
        cout<<"Sleeping"<<endl;
    }
    //getter
    int getWeight()
    {
        return weight;
    }
    //setter
    void setWeight(int weight)
    {
        this->weight=weight;//this is a pointer to current object
    }
    void print()
    {
        cout<<this->age<<" "<<this->weight<<" "<<this->type<<endl;
    }
};
int main()
{
    // Destructor concept
    cout<<"A object Creation"<<endl;
    Animal a;//static
    a.age=5;

    cout<<"B object creation"<<endl;
    Animal* b=new Animal();//Dynamic
    b->age=12;

    //Manually
    delete b;//now for b destructor is called manually in case of dynamic object creation
return 0;
}