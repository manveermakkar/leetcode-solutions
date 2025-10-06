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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;          // create just one vector
        inorder(root, result);       // pass it by reference
        return result;               // return filled vector
    }

private:
    void inorder(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;  // base case

        inorder(root->left, result);      // left subtree
        result.push_back(root->val);      // visit node
        inorder(root->right, result);     // right subtree
    }
};

