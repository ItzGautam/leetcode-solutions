class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n= matrix[0].size();
        int rowstart=0;
        int rowend =m-1;
        int colstart =0;
        int colend =n-1;

        vector<int> result;

        int count =0;

        while(rowstart<=rowend && colstart<=colend) {
        for(int i=colstart; i<=colend; i++) {
           result.push_back(matrix[rowstart][i]);
        }

        for(int i=rowstart+1; i<=rowend; i++) {
         result.push_back(matrix[i][colend]);
        }

         if(rowstart<rowend) {   
        for(int i= colend-1; i>=colstart; i--) {
          result.push_back(matrix[rowend][i]);
        } 
         }
         if(colstart<colend) {
        for(int i=rowend-1; i>=rowstart+1; i--) {
           result.push_back(matrix[i][colstart]);
        }
         }
        rowstart++;rowend--;colstart++;colend--;

     }
     return result;
    }
};
