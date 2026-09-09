class Solution {
public:
    long long cal(long long x, long long n) {

        long long product = 1;

        while (n > 0) {
            if (n % 2 == 1) {
                product = (product*x) % 1000000007;
            }

            x =  (x*x) % 1000000007;
            n /= 2;
        }

        return product;
    }

    int countGoodNumbers(long long n) {

        long long ans = 1;

        long long x = cal(5, (n + 1) / 2);
        long long y = cal(4, (n / 2));

        ans = (x * y) % 1000000007;

        return ans;
    }
};
