class Solution {
public:
    int divide(int dividend, int divisor) {

        // Only overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long n = llabs((long long) dividend);
        long long d = llabs((long long) divisor);

        long long quotient = 0;

        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count++;
            }
            quotient += (1LL << count);
            n -= (d << count);
        }

        // sign handling
        if ((dividend < 0) ^ (divisor < 0))
            quotient = -quotient;

        return (int) quotient;
    }
};

