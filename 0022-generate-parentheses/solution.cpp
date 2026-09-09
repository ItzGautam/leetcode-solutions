class Solution {
public:

    void solve(vector<string> &ans, string s, int n, int i, int j) {

        if(s.size() == 2*n) {
            ans.push_back(s);
            return;
        }

        if(i<n) {
            s += '(';
            i++;
            solve(ans,s,n,i,j);
            s.pop_back();
            i--;
        }

        int ct1 = i-j;
      
        if(j<n && ct1>0) {
            s += ')';
            j++;
            ct1--;
            solve(ans,s,n,i,j);
            s.pop_back();
            j--;
        }  

    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;

        solve(ans, s, n, 0, 0);

        return ans;
    }
};
