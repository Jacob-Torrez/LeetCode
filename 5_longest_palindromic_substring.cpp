class Solution {
public:
    string longestPalindrome(string s) {
        

        auto expandFromCenter = [](string& s, int left, int right){
            while (left >= 0 && right < s.length() && s[right] == s[left]){
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
        };

        string longest = "";
        string palindrome;
        for (int i = 0; i < s.length(); i++){

            string odd = expandFromCenter(s, i, i);
            if (odd.length() > longest.length()) longest = odd;

            string even = expandFromCenter(s, i, i + 1);
            if (even.length() > longest.length()) longest = even;
        }
        return longest;
    }
};