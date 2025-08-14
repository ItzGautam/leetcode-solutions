class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> numWithIndex;
        for (int i = 0; i < nums.size(); i++) {
            numWithIndex.push_back({nums[i], i});
        }

        sort(numWithIndex.begin(), numWithIndex.end());

        int st = 0, end = nums.size() - 1;
        while (st < end) {
            int sum = numWithIndex[st].first + numWithIndex[end].first;
            if (sum == target) {
                return {numWithIndex[st].second, numWithIndex[end].second};
            } else if (sum < target) {
                st++;
            } else {
                end--;
            }
        }

        return {};
    }
};
