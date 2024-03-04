//class  1
//implementing queue using stl
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //creation
    queue<int> q;

    //insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    //size
    cout<<"Size of queue is "<<q.size()<<endl;

    //removal
    q.pop();
    cout<<"Size of queue is "<<q.size()<<endl;

    if(q.empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    //check element at front
    cout<<"Element at front is "<<q.front()<<endl;
    cout<<"Element at front is "<<q.back()<<endl;

return 0;
}