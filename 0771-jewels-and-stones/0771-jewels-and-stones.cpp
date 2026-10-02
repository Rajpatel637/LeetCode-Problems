class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,bool> mp;
        int cnt = 0;

        for(int i = 0; i < jewels.length();i++){
            mp[jewels[i]] = true;
        }
        
        for(int i = 0; i < stones.length();i++){
            if(mp.find(stones[i]) != mp.end()) cnt++;
        }

        return cnt;

    }
};