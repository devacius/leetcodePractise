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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> qu;
        qu.push(root->left);
        qu.push(root->right);
        while(!qu.empty()){
            TreeNode* tleft=qu.front();
            qu.pop();
            TreeNode* tright=qu.front();
            qu.pop();
            if(tleft==NULL&&tright==NULL)continue;
            if(tleft==NULL||tright==NULL||tleft->val!=tright->val)return false;
            qu.push(tleft->left);
            qu.push(tright->right);
            qu.push(tleft->right);
            qu.push(tright->left);
        }
        return true;
    }
};