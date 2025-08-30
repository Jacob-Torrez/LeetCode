class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int i = digits.size() - 1;

        while (carry && i >= 0){
            int sum = carry + digits[i];

            if (sum >= 10){
                carry = 1;
                digits[i] = 0;
            } else {
                digits[i] = sum;
                carry = 0;
            }
            i--;
        }

        if (carry){
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};