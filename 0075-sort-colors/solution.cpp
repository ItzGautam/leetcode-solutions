class Solution {
public:
    void sortColors(vector<int>& nums) {
        int times0 = 0; int times1 = 0; int times2 = 0;
        int n = nums.size();

        for(int i=0; i<n; i++) {
        if(nums[i]==0) {
            times0++;
        }
         if(nums[i]==1) {
            times1++;
        }
         if(nums[i]==2) {
            times2++;
        }
        }

        int idx =0;
        for(int i=0; i<times0; i++) {
        nums[idx] = 0;
        idx++;
        }
         for(int i=0; i<times1; i++) {
        nums[idx] = 1;
        idx++;
        }
         for(int i=0; i<times2; i++) {
        nums[idx] = 2;
        idx++;
        }
    }
};
