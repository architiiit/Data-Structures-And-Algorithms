//Single level inheritence
#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        int weight;
        int age;

        void speedUp()
        {
            cout<<"Speeding Up"<<endl;
        }
        void breakMaaro()
        {
            cout<<"break maardi"<<endl;
        }
};

class Scorpio:public Car{

};

int main()
{ 
    Scorpio babbarWali;
    babbarWali.speedUp();
return 0;
}