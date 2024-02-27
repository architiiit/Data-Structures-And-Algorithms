//reverse a stack using recursion

#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }

    int topElement=s.top();
    s.pop();

    //recursive call
    insertAtBottom(s,target);

    //Backtracking
    s.push(topElement);
    
}
void reverseStack(stack<int>&s)
{
    //base case
    if(s.empty())
    {
        return;
    }

    //nahi pata
    int target=s.top();
    s.pop();

    //reverse stack
    reverseStack(s);

    //insert at bottom target ko
    insertAtBottom(s,target);
   
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    // cout<<"Before reverse Printing"<<endl;
    //  while(!s.empty())
    // {
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    // cout<<endl;

    reverseStack(s);

    cout<<"After reverse Printing"<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;

return 0;
}