class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++) {
            int sec = target - nums[i];
            if(m.find(sec) != m.end()) {
              ans.push_back(i);
              ans.push_back(m[sec]);
              break;
            }
            m[nums[i]]=i;
        }
        return {ans[0],ans[1]};
    }
};
