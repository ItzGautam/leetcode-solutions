class Solution {
public:

    void a(vector<int>& arr,int target, int st , vector<vector<int>> &sol, vector<int>pattern ) {

        int n = arr.size();

        if(target<0) {
            return;
        }

        if(target==0) {
            sol.push_back(pattern);
            return;
        }

        if(st == arr.size()){
            return;
        }

        pattern.push_back(arr[st]);

        a(arr,target-arr[st],st,sol,pattern);
        pattern.pop_back();
        a(arr,target,st+1,sol,pattern);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int st = 0;
        vector<vector<int>> sol;
        vector<int>pattern;
        
        a(candidates,target,0,sol,pattern);
        return sol;
    }
};
