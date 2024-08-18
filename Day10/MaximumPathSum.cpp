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
    int maxPathSum(TreeNode* root) {
        if(root==nullptr) return 0;
        int maxi = INT_MIN;
        maxPath(root,maxi);
        return maxi;
    }
private:
    int maxPath(TreeNode* root, int &maxi){
        if(root==nullptr) return 0;
        int leftSum = max(0,maxPath(root->left, maxi));
        int rightSum = max(0,maxPath(root->right,maxi)); //to avoid -ve path sum
        maxi = max(maxi,leftSum+rightSum+root->val);
        return root->val + max(leftSum,rightSum);
    }
};
 
int main() {


return 0;
}