class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;

        if (n == INT32_MIN) return myPow(1/(x*x), (INT32_MAX / 2) + (1 / 2)); // edge case

        if (n < 0) return 1.0 / myPow(x, -n);

        if (n % 2 == 1){
            return myPow(x * x, (n - 1) / 2) * x;
        } else {
            return myPow(x * x, n / 2);
        }
    }
};