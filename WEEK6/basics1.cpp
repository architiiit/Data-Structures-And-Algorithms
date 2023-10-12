//LEETCODE 204. COUNT PRIMES
//Seive Of Eratothenes concept
class Solution {
public:
    int countPrimes(int n) 
    {
        if(n==0)
        return false;
        vector<bool>prime(n,true);//mark all of them as prime
        prime[0]=prime[1]=false;
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                ans++;
            }
            int j=2*i;//second multiple se shuru krna hai aur last tak non prime    declare krte jaana hai
            //2->2*2=4
            //3->3*2=6
            //4->4*2=8
            while(j<n)
            {
                prime[j]=false;
                j+=i;
            }
        }
    return ans;
    }
};

//TC->O(n log(logn))