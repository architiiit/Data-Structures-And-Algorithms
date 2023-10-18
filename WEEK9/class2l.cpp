//Operator Overloading
#include<iostream>
using namespace std;
class Param{
    public:
        int val;
        //syntax for operator overloading
    void operator+(Param& obj2)
    {
        int value1=this->val;
        int value2=obj2.val;
        cout<<(value2-value1)<<endl;
    }
};
int main()
{
    Param obj1,obj2;
    obj1.val=7;
    obj2.val=2;

    //this should print the difference between them
    obj1+obj2;//obj2 will be considered as an input parametre here and + will be considered as an function call and obj1 will be the pbject 

return 0;
}