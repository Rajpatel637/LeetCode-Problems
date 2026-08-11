class Solution {

char revChar(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return 'a' + ('z'- ch);
    }
    else if(ch >= '0' && ch <= '9'){
        return '0' + ('9' - ch);
    }
    return 0;
}

public:
    int mirrorFrequency(string s) {
        unordered_map<char,int> mp;

        for(int i = 0; i < s.length();i++){
            mp[s[i]]++;
        }

        int maxSum = 0;

        for(auto &it : mp){
            char c = it.first;
            char m = revChar(c);

            if(c > m && mp.find(m) != mp.end()) continue;
            int cVal = it.second;
            int mVal = 0;
            auto mit = mp.find(m);
            if( mit != mp.end()) mVal = mit -> second;
            maxSum += abs(cVal - mVal);
        }

        return maxSum;

    }
};