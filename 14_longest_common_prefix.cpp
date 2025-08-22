class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        string match = strs[0];
        bool stop = false;

        for (int i = 0; i < match.length() && !stop; i++) {
            prefix += match[i];
            for (auto &s : strs){
                if (match[i] != s[i]){
                    stop = true;
                    prefix.pop_back();
                    break;
                }
            }
        }

        return prefix;
    }
};