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
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        return (abs(maxHeight(root->left)-maxHeight(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right));
    }

private:
    int maxHeight(TreeNode* root){
        if(root==nullptr) return 0;
        int maxLeft = maxHeight(root->left);
        int maxRight = maxHeight(root->right);
        return max(maxLeft,maxRight)+1;

    }

};
 
int main() {


return 0;
}