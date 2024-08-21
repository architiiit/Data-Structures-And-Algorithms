// sum of nodes on the longest path from root to leaf node
class Solution
{
public:
    void helper(Node* root,int& sum,vector<pair<int,int>>&ans,int count)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            sum+=root->data;
            ans.push_back({count,sum});
            sum-=root->data;
            return;
        }
        sum+=root->data;
        count++;
        helper(root->left,sum,ans,count);
        helper(root->right,sum,ans,count);
        sum-=root->data;
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        vector<pair<int,int>>ans;
        //code herehelper()
        int sum=0;
        helper(root,sum,ans,0);
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1].second;
    }
};


//
class Solution
{
public:
    pair<int,int> height(Node* root)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        auto lh=height(root->left);
        auto rh=height(root->right);
        int sum=root->data;
        if(lh.first==rh.first)
        {
            sum+=lh.second>rh.second?lh.second:rh.second;
        }
        else if(lh.first>rh.first){
            sum+=lh.second;
        }
        else{
            sum+=rh.second;
        }
        return {max(lh.first,rh.first)+1,sum};
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        auto h=height(root);
        return h.second;
    }
};