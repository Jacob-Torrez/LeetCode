class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int copy = x;
        long reversed = 0;
        for (int i = 0; copy; i++){
            reversed = (reversed * 10) + (copy % 10);
            copy = copy / 10;
        }
        

        return (reversed == x);
    }
};