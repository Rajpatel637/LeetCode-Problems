class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int i = 0;
        int j = 0;
        int index = -1;
        if(n < m) return index;
        while (j < m && i < n) {
            char ch1 = haystack[i];
            char ch2 = needle[j];
            if (ch1 == ch2) {
                if (index == -1) {
                    index = i;
                }
                j++;
                
            } else {
                if(index != -1) i = index;
                j = 0;
                index = -1;  
            }
            i++; 
        }
        if(j < m) return -1;
        return index;
    }
};