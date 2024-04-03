//LEETCODE 1823. Find the Winner of the Circular Game
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        //all palyers should go into queue
        for(int i=1;i<=n;i++)
        {
            q.push(i);//saarev players ko push kar do
        }
        while(q.size()>1)
        {
            for(int i=1;i<k;i++)
            {
                int element=q.front();
                //har baar element ko pop karo aage se aur peeche se daal do
                q.pop();
                //aage se nikalo aur peeche se daal do 
                q.push(element);
            }
            //kth element ko remove kar do
            q.pop();
        }
        return q.front();
    }
};