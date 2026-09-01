class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack <int> s;
        vector<int> ans(n);

        for(int i = 0; i<n; i++) {

            int j = i;
            int count = 0;
            s = stack<int>();

            while(j < n) {

                 if(!s.empty() && nums[j] > s.top()) {
                    ans[i] = nums[j];
                    break;
                 } else if(s.empty()) {
                    s.push(nums[j]);
                 }

                 j = (j+1) % n;
                 count++;

                 if(count==n) {
                    ans[i] = -1;
                    break;
                 }

            }
        }

        return ans;
    }
};
