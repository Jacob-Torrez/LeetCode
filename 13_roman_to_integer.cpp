class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> symbols = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int last;
        int current;
        int sub = 0;
        int total = 0;

        for (int i = 0; i < s.length() - 1; i++){
            last = symbols[s[i]];
            current = symbols[s[i + 1]];
            
            if (sub > 0) {total += last - sub; sub = 0;}
            else if (last >= current){total += last;}
            else {sub = last;}
        }

        return (s.length() == 1) ? symbols[s[0]] : total + (current - sub);
    }
};