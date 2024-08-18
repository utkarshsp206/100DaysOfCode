#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution{
    private:
    bool isLeaf(TreeNode *root){
        return !root->left && !root->right;
    }

    void addLeftBoundary(TreeNode *root, vector<int> &res){
        TreeNode *curr = root->left;
        while(curr){
            if(!isLeaf(curr)){
                res.push_back(curr->val);
            }

            if(curr->left) curr=curr->left;
            else curr= curr->right;
        }
    }

    void addLeaves(TreeNode *root, vector<int> &res){
        if(isLeaf(root)){
            res.push_back(root->val);
        }

        if(root->left) addLeaves(root->left,res);
        if(root->right) addLeaves(root->right,res);
    }

    void addRightBoundary(TreeNode *root, vector<int> &res){
        TreeNode *curr = root->right;
        stack<int> st;
        while(curr){
            if(!isLeaf(curr)){
                st.push(curr->val);
            }

            if(curr->right) curr=curr->right;
            else curr=curr->left;
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
    }

    public:
    vector<int> printBoundary(TreeNode *root){
        vector<int> res;
        if(root==NULL) return res;
    
        if(!isLeaf(root)) res.push_back(root->val);
        addLeftBoundary(root,res);
        addLeaves(root,res);
        addRightBoundary(root,res);

        return res;
    }
};

int main() {


return 0;
}