class Solution {
public:
    int passwordStrength(string password) {
        
        unordered_map<char,bool> mp;
        int len = password.length();
        int strength = 0;

        for(int i = 0; i < len; i++){
            mp[password[i]] = false;
        }

        for(int j = 0; j < len;j++){
            
            char ch = password[j];

            if((ch >= 'a' && ch <= 'z') && !mp[ch]){
                strength += 1;
                mp[ch] = 1;
            }
            else if((ch >= 'A' && ch <= 'Z') && !mp[ch]){
                strength += 2;
                mp[ch] = 1;
            }
            else if((ch >= '0' && ch <= '9') && !mp[ch]){
                strength += 3;
                mp[ch] = 1;
            }
            else if((ch == '!' || ch == '@' || ch == '#' || ch == '$') && !mp[ch]){
                strength += 5;
                mp[ch] = 1;
            }
        }

        return strength;
    }
};