class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        vector<int> a;

        unordered_map<int,int>m;

        stack<int> s;

        for(int i =0; i<nums.size(); i++) {

            m[nums[i]]++;

            if (m[nums[i]] == 1) {
                s.push(nums[i]);
            }
        }

        bool ok = true;

        while(!s.empty()) {

            if(ok == false && m[s.top()] == 1) {
                a.push_back(s.top());
                break;
            }

             if(m[s.top()] == 1) {
                ok = false;
                a.push_back(s.top());
            }

            s.pop();

        }

        return a;
    }
};
