//Next smaller element and previous smaller element
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>prevSmallerElement(vector<int>&input)
{
    stack<int>s;
    s.push(-1);

    vector<int>ans(input.size());

    //right to left -> prev smaller
    for(int i=0;i<input.size();i++)
    {
        int curr=input[i];

        //apka answer stack me
        while(s.top()>=curr)
        {
            s.pop();
        }

        //chotta element mil chuka h -> ans store
        ans[i]=s.top();

        //push krdo curr element ko
        s.push(curr);
    }
    return ans;
}
vector<int> nextSmaller(vector<int>&input)
{
    stack<int>s;
    s.push(-1);

    vector<int>ans(input.size());

    for(int i=input.size()-1;i>=0;i--)
    {
        int curr=input[i];

        //apka answer stack me
        while(s.top()>=curr)
        {
            s.pop();
        }

        //chotta element mil chuka h -> ans store
        ans[i]=s.top();

        //push krdo curr element ko
        s.push(curr);
    }
    return ans;
}

int main()
{
    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

vector<int>ans1=nextSmaller(input);

    cout<<"Next smaller element is: ";
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i]<<" ";
    }

vector<int>ans2=prevSmallerElement(input);

cout<<"Prev smaller element is: ";
    for(int i=0;i<ans2.size();i++)
    {
        cout<<ans2[i]<<" ";
    }

return 0;
}