class Solution {
public:

    int ans = 0;

    void widthTraversal(TreeNode* root) {

        if (root == NULL) return;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        while (!q.empty()) {

            unsigned long long base = q.front().second;

            unsigned long long i = q.front().second - base;
            unsigned long long j = q.back().second - base;

            int currlevel = q.size();

            ans = max(ans, (int)(j - i + 1));

            for (int x = 0; x < currlevel; x++) {

                TreeNode* temp = q.front().first;

                unsigned long long val =
                    q.front().second - base;

                q.pop();

                if (temp->left) {
                    q.push({temp->left, 2 * val + 1});
                }

                if (temp->right) {
                    q.push({temp->right, 2 * val + 2});
                }
            }
        }
    }

    int widthOfBinaryTree(TreeNode* root) {

        widthTraversal(root);

        return ans;
    }
};