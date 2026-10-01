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

    int ans = 0;
    int n = 0;

    void kse(TreeNode* root, int k) {

        if(root == NULL){
            return;
        }

        kse(root -> left,k);

        n++;
        if(n==k) {
            ans = root -> val;
            return;
        }

        kse(root -> right,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        
        kse(root,k);

        return ans;

    }
};