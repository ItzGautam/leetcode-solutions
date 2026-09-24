class Solution {
public:

    void flatten(TreeNode* root) {

        if (root == NULL) return;

        TreeNode* head = root;

        while (head) {

            TreeNode* temp = head;

            if (temp->left) {

                temp  = temp->left;

                while (temp->right) {
                    temp = temp->right;
                }

                temp->right = head->right;

                head->right = head->left;
                head->left = NULL;
            }
            
            
            head = head->right;
        }
    }
};