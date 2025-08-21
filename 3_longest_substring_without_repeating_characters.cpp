class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> occ;
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); right++){
            while (occ.count(s[right])){
                occ.erase(s[left]);
                left++;
            }
            occ.insert(s[right]);

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};