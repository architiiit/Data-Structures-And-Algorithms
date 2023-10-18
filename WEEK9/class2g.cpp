//Multi Level Inheritence
#include<iostream>
using namespace std;
class Fruit{
    public:
        string name;
};
class Mango:public Fruit{
    public:
    int weight;
};
class Alphanso:public Mango{
    public:
        int sugarlevel;
};

int main()
{
    Alphanso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;
return 0;
}