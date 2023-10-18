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
    Animal* suresh=new Animal;

    (*suresh).age=15;
    (*suresh).type="billi";
    (*suresh).eat();
    (*suresh).sleep();

    //alternative of above dynamic allocation
    suresh->age=17;
    suresh->type="baby";
    suresh->eat();
    suresh->sleep();

return 0;
}