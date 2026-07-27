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
    void Preorder(TreeNode* root,vector<int>& vt){
        if(root==NULL)return;
        // root
        vt.push_back(root->val);
        // left
        Preorder(root->left,vt);
        // right
        Preorder(root->right,vt);
    }
    vector<int> preorderTraversal(TreeNode* root) {
     vector<int>ans;
     Preorder(root,ans);
     return ans;   
    }
};