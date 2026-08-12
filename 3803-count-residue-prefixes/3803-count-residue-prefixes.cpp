class Solution {
public:
    int residuePrefixes(string s) {
        int size = s.length();
        unordered_map<int,int> mp;
        int cnt = 0;

        int resCount = 0;

        int length = 0;

        for(int i = 0; i < size;i++){
            length++;
            if(mp.find(s[i]) == mp.end()){
                cnt++;
                mp[s[i]]++;
            }
            if(cnt == (length % 3)){
                resCount++;
            }
            // else{
            //     break;
            // }
        }
        return resCount;
    }
};