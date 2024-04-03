//Leetcode 950 Reveal Cards in Increasing Order


//My method
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        deque<int>q1;
        deque<int>q2;
        vector<int>ans;

        for(int i=0;i<deck.size();i++)
        {
            q1.push_back(deck[i]);
        }

        while(!q1.empty())
        {
            int last1=q1.back();
            q1.pop_back();
            if(!q2.empty())
            {
            int last2=q2.back();
            q2.pop_back();
            q2.push_front(last2);
            q2.push_front(last1);
            }
            else{
                q2.push_back(last1);
            }
            
        }
        while(!q2.empty())
        {
            int front=q2.front();
            q2.pop_front();
            ans.push_back(front);
        }
        return ans;

    }
};


//Lakshya bhaiya solution
