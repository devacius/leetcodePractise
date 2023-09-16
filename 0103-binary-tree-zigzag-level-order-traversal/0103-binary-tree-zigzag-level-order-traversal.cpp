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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        vector<vector<int>> ans;
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        int f=1;
        while(!q.empty()){
            int n=q.size();
         
            v.clear();
            while(n--){
                TreeNode* p=q.front();
                q.pop();
                v.push_back(p->val);
                    if(p->left)q.push(p->left);
                    if(p->right)q.push(p->right);
            
            }
             f=f^1;
            if(f&1)reverse(v.begin(),v.end());
           
            ans.push_back(v);
        }
        return ans;

    }   
};