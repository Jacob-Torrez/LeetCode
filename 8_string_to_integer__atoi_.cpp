class Solution {
public:
    int myAtoi(string s) {
        int32_t num = 0;
        bool sign = 0;

        int i = 0;
        if (s[i] == ' '){while (s[i] == ' ') i++;}
        if (s[i] == '+' || s[i] == '-'){
            sign = (s[i++] == '-' ? 1 : 0);
        }
        
        while (i < s.length()){
            if (isdigit(s[i])){
                long long calc = (static_cast<long long>(num) * 10) + (s[i] - '0');
                if (calc > INT32_MAX || calc < INT32_MIN){return (sign) ? INT32_MIN : INT32_MAX;}
                else {num = calc;}
            } else {
                break;
            }
            i++;
        }

        return (sign) ? -num : num;
    }
};