class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        bool ok = true;

        for(int j = n - 1; j >= 1; j--) {
            if(nums[j - 1] < nums[j]) {

                for(int k = n - 1; k >= j; k--) {
                    if(nums[k] > nums[j - 1]) {
                        swap(nums[k], nums[j - 1]);
                        break;
                    }
                }

                reverse(nums.begin() + j, nums.end());

                ok = false;
                break;
            }
        }

        if(ok) {
            sort(nums.begin(), nums.end());
        }
    }
};
