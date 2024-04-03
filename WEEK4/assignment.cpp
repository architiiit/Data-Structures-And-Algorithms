//ASSIGNMENT 1
// LEETCODE
// 532. K-diff Pairs in an Array

// METHOD 1 (BY 2 PAIR APPROACH)
class Solution {
public:
    int findPairs(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());//sort karo
        int i=0;
        int j=1;
        set<pair<int,int>>ans;//set banao kyonki unique elements rakhne hain
        while(j<nums.size())
        {int diff=nums[j]-nums[i];
            if(diff==k)//agar difference mil jaata hai to dono pointer aage badhao
            {
                
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }else if(diff>k)
            {
                i++;//left pointer aage badhao aur difference kam krne ka koshish karo
            }else
            {
                j++;//right pointer aage badhao aur difference badhane ka koshish karo
            }
            if(i==j)//agar maan lein k=0 hai to same elements ka difference 0 aayega jis case ko nhi lena hai 
            j++;//right pointer ko aage badhate hain
        }
        return ans.size();
    }
};


// METHOD 2 (by binary search method)
class Solution {
public:

    int binarysearch(vector<int>&nums,int start,int x)
    {
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==x)
            {
                return mid;
            }
            else if(x > nums[mid]) //agar bada number hai to right me search krenge 
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;//nhi mila to -1 return kr do 
    }
    int findPairs(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        //kyonki ek sorted array hai to binary serch laga sakte hain
        set<pair<int,int>>ans;//set create krenge unique elements store krne ke liye 
        for(int i=0;i<nums.size();i++)//poore array ko traverse krenge 
        {
            if(binarysearch(nums,i+1,nums[i]+k)!=-1)//binary search krenge agar nums[i]+k agar available hai iska matlab pair exist krega warna nhi krega  
            {
                ans.insert({nums[i],nums[i]+k});//agar binary search me nums[i]+k available hai to set me daal denge 
            }
        }
        return ans.size();

    }
};
//ASSIGNMENT 2
//LEETCODE
//658. Find K Closest Elements
//************IMPORTANT*************************** 

class Solution {
public:
//METHOD1
int lowerBound(vector<int>& arr,int x)
{
    int start=0;
    int end=arr.size()-1;
    int ans=end;//isko modify krna hoga end se kyonki ye jaruri nhi hai ki x present hoga ya nhi array me to hmko fir lower bound us case me nhi milega to directly bool denge ki end hi mera lower bound hai
    //ans=end wala case is liye lena pa raha hai kyonki ho skta hai aisa element de de jo array ke saare elenments se bhi jyaada bada ho
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]>=x)
        {   ans=mid;//closest nikalne ke liye dono condition ek saath le rhe hain
            end=mid-1;
        } 
        else if(x>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
    
    vector<int>bs_method(vector<int>& arr,int k,int x)
    {//lower bound
        int h=lowerBound(arr,x);//lower bound ko high ka value denge jo ki x ka hoga lower bound 
        int l=h-1;
        while(k--)
        {   if(l<0)//ho sakta hai high 0 ho to low -1 ho jaayega
            {
                h++;
            }
            else if (h>=arr.size())
            {
                l--;//ho sakta hai high size-1 ho to sirf low ko -- krna hoga
            }

           else if(x-arr[l]>arr[h]-x)
            {
                h++;
            }
            else
            {
                l--;
            }
        }
                //  vector<int>ans;
        // for(int i=l+1;i<=h-1;i++)
        // {
        //     ans.push_back(arr[i]);
        // }
        // return ans;
        
        //we can save space by using below method
         return vector<int>(arr.begin()+l+1,arr.begin()+h );//low ek chota hai high ek bada hai
    }


//METHOD 2
    vector<int> twoPtrMethod(vector<int>& arr,int k,int x)
    {
        int l=0; 
        int h=arr.size()-1;
        while(h-l>=k)
        {
            if(x-arr[l]>arr[h]-x)
            {
                l++;
            }
            else{//equal wale case me bhi work krega jo ki second condition ko satisfy krega
                h--;
            }
        }
        //  vector<int>ans;
        // for(int i=l;i<=h;i++)
        // {
        //     ans.push_back(arr[i]);
        // }
        // return ans;

        //we can save space by using below method

        return vector<int>(arr.begin()+l,arr.begin()+h+1);//last ke pehle tak krega is liye hamesha high+1 kiye hain
    }
   //time complexity O(N-K) //no comparison in k window size
    //space complexity O(1) //no extra space if we use stl to return else we need an extra answer vector and store data it it then return it


    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //return twoPtrMethod(arr,k,x);//METHOD 2
        return bs_method(arr,k,x);//METHOD 1
    }
};


// ****************************************
//ASSIGNMENT 3
// EXPONENTIAL SEARCH ALGORITHM 
//SEPERATE FOLDER ME HAI


//ASSIGNMENT 4 
//Allocate minimum number of pages
//GFG QUESTION
class Solution 
{
    public:
    bool isPossibleSol(int A[],int N,int M,int sol)
    {int sum=0;
     int c=1;
        for(int i=0;i<N;i++)
        {
            if(A[i]>sol)
            return false;
            
            if(A[i]+sum>sol)
            {
                c++;
                sum=A[i];
            
                if(c>M)
                {
                return false;
                }
            }
            else{
                
            sum+=A[i];
            }
        }
        
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N)
        {
            return -1;
        }
    int ans=-1;
    int start=0;
    int end=accumulate(A,A+N,0);
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(isPossibleSol(A,N,M,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    }
};


//ASSIGNMENT 5
//PAINTERS PARTITION PROBLEM
//GFG QUESTION EXACTLY SAME AS BOOK ALLOCATION PROBLEM

class Solution
{
  public:
   bool isPossibleSol(int arr[],int n,int k,long long mid)
        {long long sum=0;
        int c=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>mid)
            return false;
            
            if(arr[i]+sum>mid)
            {
                c++;
                sum=arr[i];
                if(c>k)
                return false;
            }
            else
            {
                sum+=arr[i];
            }
        }
            return true;
    };
    
  
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long start=0;
        long long end=0;
        for(int i=0;i<n;i++)
        {
            end+=arr[i];
        }
        long long ans=-1;
        long long mid=start+(end-start)/2;
        while(start<=end)
        {
            if(isPossibleSol(arr,n,k,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
        
    }
};

//ASSIGNMENT 6
//Aggressive cow problem 

class Solution {
public:
    bool isPossibleSol(int n,int k,vector<int>&stalls,int mid)
    {
        //can we place k cows , with atleast mid distance between cows.
        int c=1;
        int pos=stalls[0];
        for(int i=1;i<stalls.size();i++)
        {
            if(stalls[i]-pos >= mid)
            {
                c++;//allocate distance to another cow
                pos=stalls[i];
            }
            if(c==k) return true;//all cows has been placed
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls)
    {
        sort(stalls.begin(),stalls.end());
        int start=0;
        int end=stalls[n-1]-stalls[0];
        int ans=-1;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(isPossibleSol(n,k,stalls,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        
        return ans;
    }
};



