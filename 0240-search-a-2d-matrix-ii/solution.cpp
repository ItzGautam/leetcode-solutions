class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {

       int m = arr.size();

       int n = arr[0].size();

       int st=0; int end = n-1; 
        while(st < m && end >= 0) {

          if(target < arr[st][end]) {
            end--;
          }else if(arr[st][end] < target ) {
            st++;
            } else if(target == arr[st][end]) {
                return true;
             } 
          }

        return false;
    }
};
