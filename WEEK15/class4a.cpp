//Class 4 heaps
//LEETCODE 1962 remove stones to minimise total

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxHeap;//create maxheap
        for(int i=0;i<piles.size();i++){
            maxHeap.push(piles[i]);
        }
        while(k--){
            int topElement=maxHeap.top();
            maxHeap.pop();
            topElement=topElement-floor(topElement/2);
            maxHeap.push(topElement);
        }
        int sum=0;
        while(!maxHeap.empty()){
            sum+=maxHeap.top();
            maxHeap.pop();
        }
        return sum;
    }
};