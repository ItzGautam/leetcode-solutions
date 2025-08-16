class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     unordered_set<int> s;
     int a,b;
     int sum1 =0;
     int n= grid.size();

     for(int i=0; i<grid.size(); i++) {
        for(int j=0; j<grid.size(); j++) {
            if(s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];
            }
            s.insert(grid[i][j]);
        }
     }

     for(int val :s) {
        sum1 += val;
     }      
     int sum2 =0;

     for(int i=1; i<=n*n; i++) {
       sum2 += i;
     }
      b = sum2 - sum1;

      return {a,b};
    }
};
