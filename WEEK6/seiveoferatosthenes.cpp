//optimising seive of eratosthenes
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool>seive(int n){
    //create a seive array of N size telling is prime
    vector<bool>seive(n+1,true);
    seive[0]=seive[1]=false;
    for(int i=2;i<=sqrt(n);i++)
    {if(seive[i]==true)
        {
           // int j=i*2;
           int j=i*i;//optimization 1 
           //first unmarked number would be i*i as others have been marked by (2 to i-1)

            while(j<=n)
            {
                seive[j]=false;
                j+=i;
            }
        }

    }
    return seive;
}
//TIME COMPLEXITY nlog(log n)
int main()
{   int n;
    cin>>n;
    vector<bool>sieve=seive(n);
    for(int i=0;i<=n;i++)
    {
     if(sieve[i]) 
     cout<<i<<" ";
    }
return 0;
}