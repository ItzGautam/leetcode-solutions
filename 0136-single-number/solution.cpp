class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int>m;

        stack<int> s;

        for(int i =0; i<nums.size(); i++) {

            m[nums[i]]++;

            if (m[nums[i]] == 1) {
                s.push(nums[i]);
            }
        }

        while(!s.empty()) {

            if(m[s.top()] == 1) {
                break;
            }

            s.pop();
        }

        return s.top();
    }
};
