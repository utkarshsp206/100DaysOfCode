#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        //Take level order traversal, store in a 2d array, print last element of each level
        vector<vector<int>> array;
        vector<int> ans;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                level.push_back(node->val);
            }
            array.push_back(level);
        }
        for(int i=0;i<array.size();i++){
            int temp = array[i].size();
            ans.push_back(array[i][temp-1]);
        }
        return ans;
    }
};
 
int main() {


return 0;
}