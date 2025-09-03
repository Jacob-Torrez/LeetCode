class Solution {
public:

    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);

        return climbStairsHelper(n, memo);
    }

    int climbStairsHelper(int n, vector<int>& memo){
        if (n < 0){
            return 0;
        }
        else if (n <= 1){
            return 1;
        }

        if (memo[n] != -1){
            return memo[n];
        }

        memo[n] = climbStairsHelper(n - 1, memo) + climbStairsHelper(n - 2, memo);

        return memo[n];
    }
};