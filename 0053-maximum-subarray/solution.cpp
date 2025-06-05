class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Currentsum=0;
        int Maximumsum=INT_MIN;

        for (int val:nums) {
            Currentsum+=val;
            Maximumsum=max(Maximumsum,Currentsum);
            
            if (Currentsum<0) {
            Currentsum = 0;
            }
        }
        return Maximumsum;
    }
};
