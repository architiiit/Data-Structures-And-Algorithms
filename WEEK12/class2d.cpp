//Interleave first and second half of queue
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void interleaveQueue(queue<int>&q)
{
    //step A:seperate both halves
    int n=q.size();
    if(q.empty())
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    int k=n/2;//n odd wale case me k ki value bhi odd hogi
    int count=0;
    queue<int>q2;//new queue to store half of queue

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count==k)
        {
            break;
        }
    }

    //step B:interleaving start karo
    while(!q.empty() && !q2.empty())
    {
        int first=q2.front();
        q2.pop();
        q.push(first);

        int second=q.front();
        q.pop();
        q.push(second);
    }
    //odd wala case me ek extra element hoga usko pop krna hoga
    if(n&1)
    {
        int element=q.front();
        q.pop();
        q.push(element);
    }
}
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);


    interleaveQueue(q);

    cout<<"Printing Queue"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
return 0;
}