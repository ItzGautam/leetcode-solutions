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

    TreeNode* helper(vector<int>& p, int &i, int limit) {

        if(i == p.size() || p[i] > limit) {
            return NULL;
        }

        TreeNode* root = new TreeNode(p[i]);

        i++;
        root -> left = helper(p,i,root -> val);
        root -> right = helper(p,i,limit);

        return root; 

    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {

        int i = 0;
        
        TreeNode* root = helper(preorder,i,INT_MAX);

        return root;
    }
};