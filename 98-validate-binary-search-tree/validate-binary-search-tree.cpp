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

    bool ok = true;

    void check(TreeNode* root, stack<int> &s) {

        if(root == NULL) {
            return;
        }

        check(root -> left,s);

        if(s.empty() || s.top() < root -> val) {
            s.push(root -> val);
        } else if(s.top() >= root -> val){
            ok = false;
            return;
        }
 
        check(root -> right,s);

    }

    bool isValidBST(TreeNode* root) {

        stack<int> s;

        check(root,s);

        return ok;
    }
};