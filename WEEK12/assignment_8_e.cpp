//LEETCODE::2327. Number of People Aware of a Secret

class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        queue<pair<int,int>>forgetQ,delayQ;//<uss din,kitne new logo ko secet pata laga>
        const int M=1e9+7;
        forgetQ.push({1,1});//day 1 pe person A ko pata hoga
        delayQ.push({1,1});//day 1 pe person A ko pata hoga

        int curr=0;//current active spreadors
        int ans=1;//A already knows

        for(int day=1;day<=n;day++)
        {
            //step A->check forget queue->active spreader and person know about secret kam karo
            if(!forgetQ.empty() && forgetQ.front().first+forget<=day)//vo person ab forget krega
            {
                auto front=forgetQ.front();
                forgetQ.pop();
                auto no=front.second;
                //jo log forget kar rahe hain volog active spreader hong aur volog secret jaante bhi honge is liye dono ko minus krna hoga
                ans=(ans-no+M)%M;
                curr=(curr-no+M)%M;
            }
            //step B->check delay queue->make new active spreaders
            if(!delayQ.empty() && delayQ.front().first+delay<=day)
            {
                auto front=delayQ.front();
                delayQ.pop();
                curr=(curr+front.second)%M;//kitne logo ko secret pata tha vo ab active hue hain

            }

            //Step 3:spread the secret finally
            if(curr>0)
            {
                ans=(ans+curr)%M;
                delayQ.push({day,curr});
                forgetQ.push({day,curr});
            }

        }
        return ans;       
    }
};