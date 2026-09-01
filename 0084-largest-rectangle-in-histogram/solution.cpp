class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n = heights.size();
        vector<int> arr1(n);
        vector<int> arr2(n);
        int area = 0;

        for(int i = n-1; i>=0 ; i--) {
            if(s.empty()) {
                arr1[i] = n;
                s.push(i);
            } else{
                while( !s.empty() && heights[i] <= heights[s.top()]  ) {
                    s.pop();
                }

                if(s.empty()) {
                    arr1[i] = n;
                } else {
                    arr1[i] = s.top();
                }
                s.push(i);
            }
        }

        s = stack<int>();

        for(int i = 0; i<n ; i++) {
            if(s.empty()) {
                arr2[i] = -1;
                s.push(i);
            } else{
                while( !s.empty() && heights[i] <= heights[s.top()] ) {
                    s.pop();
                }

                if(s.empty()) {
                    arr2[i] = -1;
                } else {
                    arr2[i] = s.top();
                }
                s.push(i);
            }
        }

        int ans = 0;

        for(int i =0; i<n; i++) {
            area = (arr1[i]-arr2[i] -1) * heights[i] ;
            ans = max(ans,area);
        }

        return ans;
    }
};
