class Solution {
public:

    vector<int> singleNumber(vector<int>& nums) {

        int ans = 0;
        vector<int> sol;
        
        for(int i =0; i<nums.size(); i++) {
            ans ^= nums[i];
        }
        
        int idx = 0;

        while(((ans >> idx) & 1 ) == 0 ) {
            idx ++;
        }

        int x = 0;
        int y = 0;

        for(int i = 0; i<nums.size(); i++) {
            if(((nums[i] >> idx) & 1) == 1) {
                x ^= nums[i];
            } else {
                y ^= nums[i];
            }
        }

        sol.push_back(x);
        sol.push_back(y);

        return sol;
    }
};
