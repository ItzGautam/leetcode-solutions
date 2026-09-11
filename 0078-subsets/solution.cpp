class Solution {
public:

    void recursion(vector<int>& nums, vector<vector<int>>& ans,  vector<int> m, int i) {
        if(i == nums.size()) {
            ans.push_back(m);
            return;
        }

        m.push_back(nums[i]);
        recursion(nums,ans,m,i+1);
        m.pop_back();

        recursion(nums,ans,m,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> m;

        recursion(nums,ans,m,0);

        return ans;
    }
};
