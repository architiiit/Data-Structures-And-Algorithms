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
    Animal()
    {
        this->weight=0;
        this->age=0;
        this->type="";
       cout<<"Constructor called "<<endl;
    }

    //Parametrised constructor
    Animal(int age)
    {
        this->age=age;
        cout<<"Parametrised constructor called of one parametre"<<endl;
    }
    Animal(int age,int weight)
    {
        this->age=age;
        this->weight=weight;
        cout<<"Parametrised constructor called of 2 parametres"<<endl;
    }
    Animal(int age,int weight,string type)
    {
        this->age=age;
        this->type=type;
        this->weight=weight;
        cout<<"Parametrised constructor called of 3 parametres"<<endl;
    }

    //Copy constructor
    Animal(Animal &obj)//infinite loop se bachane ke liye pass by reference karte hain
    {
        this->age=obj.age;
        this->type=obj.type;
        this->weight=obj.weight;
        cout<<"we are inside copy constructor"<<endl;
    }
    
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
    //*****Object Creation*********


    //************Static creation of Object*********** 

    // Animal ramesh;//Animal type ka object jiska naam ramesh hai
    // //we use . operator to access object's property
    // ramesh.age=12;
    // ramesh.type="Lion";
    // cout<<"Age of ramesh is: "<<ramesh.age<<endl;//we use . operator to access ramesh's age
    // cout<<"Age of ramesh is: "<<ramesh.type<<endl;
    // //cout<<ramesh.weight<<endl;//cannot be accessed because it is private so we use getters abd setters
    // ramesh.eat();
    // ramesh.sleep();

    // //since weight is private so for that we need getters and setters to access and read data
    // ramesh.setWeight(101);
    // cout<<"Weight "<<ramesh.getWeight()<<endl;
    
    //***************Dynamic Memory********************
    // Animal* suresh=new Animal;

    // (*suresh).age=15;
    // (*suresh).type="billi";
    // (*suresh).eat();
    // (*suresh).sleep();

    // //alternative of above dynamic allocation
    // suresh->age=17;
    // suresh->type="baby";
    // suresh->eat();
    // suresh->sleep();

    // //default constructor calling
    // Animal a;//static
    // Animal* b=new Animal;//Dynamic

    // //Parametrised constructor called for 1 parametre
    // Animal a(10);//static
    // Animal* b=new Animal(100);//Dynamic

    //Parametrised constructor called for 2 parametre
    // Animal a(10,50);//static
    // Animal* b=new Animal(100,50);//Dynamic

    //Parametrised constructor called for 3 parametre
    // Animal a(10,50,"babbar");//static
    // Animal* b=new Animal(100,50,"babbar");//Dynamic

    // //Copy constructor
    // Animal c=a;//copy constructor is called


    // //another way to copy
    // Animal animal1(c);//pass an object as parametre

    // Animal a;
    // a.age=20;
    // a.setWeight(101);
    // a.type="Babbar";

    // Animal b=a;//copied a to b

    // cout<<"a-> ";
    // a.print();

    // cout<<"b->";
    // b.print();

    // a.type[0]='G';
    // cout<<"a->";
    // a.print();

    // cout<<"b->";
    // b.print();

//**********************************
    // Destructor concept
    // cout<<"A object Creation"<<endl;
    // Animal a;//static
    // a.age=5;

    // cout<<"B object creation"<<endl;
    // Animal* b=new Animal();//Dynamic
    // b->age=12;

return 0;
}