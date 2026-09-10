class Solution {
public:
    int maxDistance(string moves) {
        int x = 0;
        int y = 0;
        int count = 0;

        for(auto p: moves) {
            if(p == 'U') {
                y ++;
            } else if(p == 'D') {
                y--;
            } else if(p == 'R') {
                x++;
            } else if(p == 'L') {
                x--;
            } else {
                count++;
            }
        }
        
        return abs(x) + abs(y) + count;

    }
};
