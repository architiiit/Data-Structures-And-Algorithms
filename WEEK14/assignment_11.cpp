//Valid BST from Preorder::interviewbit
void build(vector<int>A,int min,int max,int& i)
{
    if(i>=A.size())
    return;
    
    if(A[i]>min && A[i]<max)
    {
        int nodeData=A[i++];
        build(A,min,nodeData,i);
        build(A,nodeData,max,i);
    }
}

int Solution::solve(vector<int> &A) {
    int i=0;
    int min=INT_MIN;
    int max=INT_MAX;
    build(A,min,max,i);
    return i==A.size();
}
