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

    int sum = 0;
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {

        if(root2 == NULL && root1 == NULL) {
            return NULL;
        }

        if(root1 != NULL && root2 == NULL) {
            sum = root1 -> val;
        } else if(root1 == NULL) {
            sum = root2 -> val;
        } else {
            sum = root2 -> val + root1 -> val;
        }
        
        TreeNode* root = new TreeNode(sum);

        if(root1 != NULL && root2 != NULL) {
            root -> left = mergeTrees(root1 -> left, root2 -> left);
        } else if(root1 == NULL) {
            root-> left = mergeTrees(root1,root2 -> left);
        } else {
            root-> left = mergeTrees(root1 -> left, root2);
        }

        if(root1 != NULL && root2 != NULL) {
            root-> right = mergeTrees(root1 -> right, root2 -> right);
        } else if(root1 == NULL) {
            root-> right = mergeTrees(root1,root2 -> right);
        } else {
           root-> right =  mergeTrees(root1 -> right, root2);
        }

        return root;

    }
};