class Solution {
public:

    bool checkPalindrome(string &s) {
        int st =0;
        int end = s.size()-1;

        while(st<=end) {
            if(s[st]!=s[end]) {
                return false;
            } else {
                st++;
                end--;
            }
        }

        return true;
    }

    void backtrack(vector<vector<string>> &a, vector<string> &b,string &s) {

        if(s.size()==0) {
            a.push_back(b);
            return;
        }

        for(int i=0; i<s.size(); i++) {
            string cs = s.substr(0,i+1);
            if(checkPalindrome(cs)) {
                string full = s;
                b.push_back(cs);
                s= s.substr(i+1);
                backtrack(a,b,s);
                s=full;
                b.pop_back();
            } else {
                continue;
            }

        }   
    }  
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> a;
        vector<string> b;
        backtrack(a,b,s);

        return a;
    }
};
