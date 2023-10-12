//QUESTION 7
//BUY AND SELL STOCK
//LEETCODE 121

class Solution {
public:
    void maxProfitFinder(vector<int>&prices,int i,int& maxProfit,int& minPrice)
    {
        //base case
        if(i==prices.size())
        {
            return ;
        }


        //ek case solve 
        if(prices[i]<minPrice)
        {
            minPrice=prices[i];
        }
        
        int Profit=prices[i]-minPrice;
        if(Profit>maxProfit)
        {
            maxProfit=Profit;
        }

        //baaki recursion
        maxProfitFinder(prices,i+1,maxProfit,minPrice);

    }
    int maxProfit(vector<int>& prices) 
    {
        int maxProfit=INT_MIN;
        int minPrice=INT_MAX;
        int i=0;
        maxProfitFinder(prices,i,maxProfit,minPrice);
        return maxProfit;
    }
};