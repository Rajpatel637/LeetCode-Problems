class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0;
        int r = 0;
        int n = s.length();
        int maxLength = 0;
        unordered_map<char,int> mp;

        while(r < n){
            mp[s[r]]++;

            if(mp[s[r]] > 2){
                while(mp[s[r]] > 2){
                    mp[s[l]]--;
                    l++;
                }
            }

            maxLength = max(maxLength,r-l+1);

            r++;
        }

        return maxLength;
    }
};