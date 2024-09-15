//GFG ::IS Binary tree heap
// also check whether it is complete binary tree or not

#include<iostream>
using namespace std;

class Info{
    public:
        int maxVal;
        bool isHeap;
        Info(int a,bool b){
            this->maxVal=a;
            this->isHeap=b;
        }
};

Info checkMaxHeap(Node* root)
{

    //base case
    if(root==NULL)
    {
        Info temp;
        temp.maxVal=INT_MIN;
        temp.isHeap=true;
        return temp;
    }

    if(root->left==NULL && root->right==NULL){
        Info temp;
        temp.maxVal=root->data;
        temp.isHeap=true;
        return temp;
    }

    Info leftAns=checkMaxHeap(root->left);
    Info rightAns=checkMaxHeap(root->right);

    //1 case mujhe solve krna hai

    if(root->data>leftAns.maxVal && root->data>rightAns.maxVal && leftAns.isHeap && rightAns.isHeap){
        Info ans;
        ans.maxVal=root->data;
        ans.isHeap=true;
        return ans;
    }
    else{
        Info ans;
        ans.maxVal=max(root->data,max(leftAns.maxVal,rightAns.maxVal));
        ans.isHeap=false;
        return ans;
    }


}
int main()
{

return 0;
}