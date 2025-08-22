class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x){
            if (reversed > INT32_MAX / 10 || reversed < INT32_MIN / 10){return 0;}
            reversed = (reversed * 10) + (x % 10);
            x /= 10;
        }

        return reversed;
    }
};