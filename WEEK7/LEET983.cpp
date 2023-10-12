//QUESTION 12
//LEETCODE 983
//Min cost for tickets
class Solution {
public:
    int mincostTicket_helper(vector<int>& days, vector<int>& costs,int i)
    {
        //base case
        if(i>=days.size()) return 0;

        //1 case solve
        // cost of 1 day
        int cost1=costs[0]+mincostTicket_helper(days,costs,i+1);//i ->1 Day hai to 1 aage badhayenge

        //cost of 7 days
        int j=i;
        int passEndDay=days[i]+7-1;//end day pata kr lenge 
        while(j<days.size() && days[j]<=passEndDay)
        {
            j++;
        }
        int cost7=costs[1]+mincostTicket_helper(days,costs,j);

        //cost of 30 days
        j=i;
        passEndDay=days[i]+30-1;//end day pata kr lenge 
        while(j<days.size() && days[j]<=passEndDay)
        {
            j++;
        }
        int cost30=costs[2]+mincostTicket_helper(days,costs,j);

        return min(cost1,min(cost7,cost30));

    }
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        return mincostTicket_helper(days,costs,0);
    }
};