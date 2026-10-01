class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,bool> mp;
        int cnt = 0;

        for(int i = 0; i < s.length();i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = true;
                cnt++;
            }
        }

        return cnt;
    }
};