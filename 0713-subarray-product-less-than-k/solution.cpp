class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int product = 1;
        int ans = 0;
        int st = 0;
        int n = nums.size();

        if(k<=1) {
            return 0;
        }

        for(int i =0; i<n; i++) {

            product *= nums[i];

            while(product >= k) {
                product /= nums[st];
                st ++;
            }

            ans += (i - st + 1);
        }

        return ans;
    }
};
