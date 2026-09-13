class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid,
                                    vector<int>& rowShift,
                                    vector<int>& colShift) {

        for (int i = 0; i < n; i++) {

            int k = rowShift[i] % n;
            vector<int> temp(n);

            for (int j = 0; j < n; j++) {
                temp[j] = grid[i][(j + k) % n];
            }

            grid[i] = temp;
        }

        for (int i = 0; i < n; i++) {

            int k = colShift[i] % n;
            vector<int> temp(n);

            for (int j = 0; j < n; j++) {
                temp[j] = grid[(j + k) % n][i];
            }

            for (int j = 0; j < n; j++) {
                grid[j][i] = temp[j];
            }
        }

        return grid;
    }
};
