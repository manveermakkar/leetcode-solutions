/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
         if(root==NULL){
        return 0;
    }
    int op1=diameterOfBinaryTree(root->left);//check left side
    int op2=diameterOfBinaryTree(root->right);//check right side
    int op3=height(root->left)+height(root->right);//this moves makes time complexity o(n^2)
    int ans=max(op1,max(op2,op3));//biggest path
    return ans;
}
};
