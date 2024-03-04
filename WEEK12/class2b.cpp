//reverse queue usingn recursion
//class 2
#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int>&q)
{
    //base case
    if(q.empty())
    {
        return;
    }

    //ek case solve kr lete hain
    int element=q.front();
    q.pop();

    //baaki recursion sambhaal lega
    reverseQueue(q);

    //wapis se push kr do
    q.push(element);
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