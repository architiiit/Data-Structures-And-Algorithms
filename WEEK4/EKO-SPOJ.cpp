//ASSIGNMENT 7
//EKO SPOJ


// Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

// Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

// Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
// Input

// The first line of input contains two space-separated positive integers, N (the number of trees, 1 ≤ N ≤ 1 000 000) and M (Mirko‟s required wood amount, 1 ≤ M ≤ 2 000 000 000).

// The second line of input contains N space-separated positive integers less than 1 000 000 000, the heights of each tree (in metres). The sum of all heights will exceed M, thus Mirko will always be able to obtain the required amount of wood.
// Output

// The first and only line of output must contain the required height setting.
// Example

// Input:
// 4 7
// 20 15 10 17

// Output:
// 15

// Input:
// 5 20
// 4 42 40 26 46

// Output:
// 36


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool possiblesol(vector<long long int>trees,long long int m,long long int mid)
{
    long long int woodCollected=0;
    for(long long int i=0;i<trees.size();i++)
    {
        if(trees[i]>=mid)
        {
            woodCollected+=trees[i]-mid;
        }
    }
    if(woodCollected>=m)
    {
        return true;
    }
    else{
        return false;
    }

}
int maxCuttrees(vector<long long int>trees,long long int m)
{
    //search space is between 0 to max height of tree
    //kyonki jyaada se jyaada max height ka tree hi cut kr sakte hain
    long long int start=0;
    long long int end=*max_element(trees.begin(),trees.end());
    long long int mid=start+(end-start)/2;
    long long int ans=-1;
    while(start<=end)
    {
        if(possiblesol(trees,m,mid))
        {
            ans=mid;//store krenge answer ko
            start=mid+1;//start mid se aage 
            //dekhenge kyonki acceptable answer mil chuka hoga aur 
            //height badha ke dekhenge taaki maximum possible height mil sake 
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
long long int n;//NUMBER OF TREES
long long int m;//amount of trees
cin>>n>>m;
vector<long long int>trees;
for(long long int i=0;i<n;i++)
{
    long long int height;
    cin>>height;
    trees.push_back(height);
}
cout<<maxCuttrees(trees,m);

return 0;
}