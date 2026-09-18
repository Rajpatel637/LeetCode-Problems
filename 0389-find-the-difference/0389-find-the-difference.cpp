class Solution {
public:
    char findTheDifference(string s, string t) {
        int sSum = 0;
        int tSum = 0;
        for(int i = 0; i < s.length();i++){
            sSum += s[i];
        }

        for(int i = 0; i < t.length();i++){
           tSum += t[i];
        }
        return tSum-sSum;
    }
};