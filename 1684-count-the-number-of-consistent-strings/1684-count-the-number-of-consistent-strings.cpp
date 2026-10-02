class Solution {

public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_map<char,bool> mp;
        int cnt = 0;

        for(int i = 0; i < allowed.length();i++){
            mp[allowed[i]] = true;
        }

        for(int i = 0; i < words.size();i++){
            bool ans = true;
            for(int j = 0; j < words[i].length();j++){
                if(mp.find(words[i][j]) == mp.end()) ans = false;
            }

            if(ans) cnt++;
        }

        return cnt;
    }
};