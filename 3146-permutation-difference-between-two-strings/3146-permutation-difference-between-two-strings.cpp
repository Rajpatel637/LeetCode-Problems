class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> mp;
        int sLen = s.length();
        int tLen = t.length();
        int sum = 0;

        for (int i = 0; i < sLen; i++) {
            mp[s[i]] = i;
        }

        for (int i = 0; i < tLen; i++) {
            if (mp.find(t[i]) != mp.end()) {
                sum += abs(mp[t[i]] - i);
            }
        }

        return sum;
    }
};