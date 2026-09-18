class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int, pair<bool, int>> mp;

        for (int i = 0; i < magazine.length(); i++) {
            mp[magazine[i]].first = false;
            mp[magazine[i]].second++;
        }

        for (int i = 0; i < ransomNote.size(); i++) {
            if (mp.find(ransomNote[i]) != mp.end()) {
                if (mp[ransomNote[i]].first && mp[ransomNote[i]].second == 0) {
                    return false;
                }

                if (mp[ransomNote[i]].second == 1) {

                    mp[ransomNote[i]].first = true;
                }
                mp[ransomNote[i]].second--;

            } else {
                return false;
            }
        }

        return true;
    }
};