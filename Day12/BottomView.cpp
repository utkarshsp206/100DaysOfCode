#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node (int val){
        this->data=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root==nullptr) return ans;
        map<int,int> mpp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node *node = it.first;
            int line = it.second;
            //! Same as Top View, just replace the mpp[key] value if encountered again
            mpp[line] = node->data;
                
            if(node->left!=NULL) q.push({node->left,line-1});
            if(node->right!=NULL) q.push({node->right,line+1});
            
        }
    
        for(auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }

};

int main() {


return 0;
}