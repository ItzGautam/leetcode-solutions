class Solution {
public:
    int n = 0;

    int calCount(int a) {

        int product = 1;

        while (a >= product) {
            product *= 2;
            n++;
        }

        return n;
    }

    int minBitFlips(int start, int goal) {

        if (start > goal) {
            n = calCount(start);
        } else {
            n = calCount(goal);
        }

        int sol = 0;

        for (int i = 0; i < n; i++) {
            if ((((start ^ goal) >> i) & 1) == 0) {
                sol++;
            }
        }

        return n-sol;
    }
};
