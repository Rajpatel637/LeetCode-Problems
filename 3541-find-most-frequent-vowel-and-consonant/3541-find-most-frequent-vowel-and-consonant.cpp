class Solution {
public:
    int maxFreqSum(string s) {
        int maxVowel = 0;
        int maxCons = 0;
        unordered_map<char,int> mp;
        
        for(int i = 0; i < s.length();i++){
            mp[s[i]]++;
        }

        for(auto &i : mp){
            char c = i.first;

            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                maxVowel = max(maxVowel,i.second);
            }
            else{
                maxCons = max(maxCons,i.second);
            }
        }

        return maxVowel + maxCons;

    }
};