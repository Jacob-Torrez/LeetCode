class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;

        for (int i = 0; i < haystack.length() && index == -1; i++){
            if (haystack[i] == needle[0]){
                if (needle.length() > 1){
                    for (int j = 1; j < needle.length() && haystack[i + j] == needle[j]; j++){
                        if (j == needle.length() - 1){
                            return i;
                        }
                    }
                }
                else {return i;}
            }
        }

        return index;
    }
};