// optimising seive of eratosthenes
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<bool> Sieve(int n)
{
    // create a seive array of N size telling is prime
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (sieve[i] == true)
        {
            // int j=i*2;
            int j = i * i; // optimization 1
            // first unmarked number would be i*i as others have been marked by (2 to i-1)

            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}
vector<bool> segSieve(int L, int R)
{                                        // get me prime array,i will use it to mark seg seive
    vector<bool> sieve = Sieve(sqrt(R)); // step 1
    vector<int> basePrimes;
    for (int i = 0; i < sieve.size(); i++)
    {
        if (sieve[i])
        {
            basePrimes.push_back(i);
        }
    }
    vector<bool> segSieve(R - L + 1,true);
    if (L == 1 || L == 0)
        segSieve[L] = false;

for (auto prime : basePrimes)
{
    int first_mul = (L / prime) * prime;
    if (first_mul < L)
    { 
        first_mul += prime;
    }
    int j = max(first_mul, prime * prime);
    while (j <= R)
    {
        segSieve[j - L] = false;
        j += prime;
    }
    
}
return segSieve;
}
// TIME COMPLEXITY nlog(log n)
int main()
{

    int L = 110;
    int R = 130;
    vector<bool> ss = segSieve(L, R);
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i])
        {
            cout << i + L << " ";
        }
    }
    return 0;
}