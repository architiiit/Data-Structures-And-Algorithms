//class 2
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q)
{
    stack<int>s;

//step1: put all elements of q into stack
    while(!q.empty())
    {
        int element=q.front();
        q.pop();

        s.push(element);
    }

    //step2 put all elements of stack into q
    while(!s.empty())
    {
        int element=s.top();
        s.pop();

        q.push(element);
    }
}
int main()
{
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverseQueue(q);

    cout<<"Printing Queue"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
return 0;
}