class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> a;
        int max_idx = 0;
        deque<int> dq;

        for(int i = 0; i<nums.size(); i++) {

            while(!dq.empty() && ( dq.front() <= (i-k) ) ) {
                dq.pop_front();
            }

            while( !dq.empty() && nums[i] > nums[dq.back()] ) {
                    dq.pop_back();
                }

            if(i<k-1) {

                dq.push_back(i);
                continue;
            }

            dq.push_back(i);

            a.push_back(nums[dq.front()]);

        }

        return a;
    }
};
