class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> symbols = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int last = -1;
        int current;
        int total = 0;

        for (char c : s){
            current = symbols[c];
            if (last == -1){
                last = current;
            } 
            else if (last < current) {
                total += (current - last);
                last = -1;
            } else {
                total += last;
                last = current;
            }
        }

        if (last > 0) total += last;

        return total;
    }
};