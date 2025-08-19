class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int n= nums.size();

        vector<int> ans;

        for(int i=0;i<n;i++) {
        if(s.find(nums[i]) != s.end()) {
            ans.push_back(nums[i]);
            break;
        }
        s.insert(nums[i]);
        }
        return ans[0];
    }
};
