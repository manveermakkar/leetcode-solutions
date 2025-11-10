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
    int lheight(TreeNode* root){
        if (root==NULL) return 0;
        int l=lheight(root->left);
        return 1+l;
    }
    int rheight(TreeNode* root){
        if (root==NULL) return 0;
        int r=rheight(root->right);
        return 1+r;
    }
    int countNodes(TreeNode* root) {
         if(root==NULL) return 0;
        if(lheight(root)==rheight(root)){
            return (1<<lheight(root))-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
