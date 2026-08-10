class Solution {

private:
    int findMax(unordered_map<char,pair<int,pair<int,int>>>& mp){
        int maxi = INT_MIN;
        int index = INT_MAX;

        for(auto &it : mp){
            if(maxi == it.second.second.first && it.second.second.second >= 1){
                // maxi = it.second.second.first;
                if(index >= it.second.first){
                    index = it.first - 'a';
                }
            }
            else if(maxi < it.second.second.first && it.second.second.second >= 1){
                maxi = it.second.second.first;
                index = it.first - 'a';
            }
        }

        return index;
    }

public:
    string sortVowels(string s) {
        unordered_map<char,pair<int,pair<int,int>>> mp;
        int n = s.length();
        string str = "";
        int index = 1;
        for(int i = 0; i < n;i++){
            char ch = s[i];

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                mp[ch].second.first++; // freq
                mp[ch].second.second++; // how many times it can be used
                if(mp[ch].first != index-1){
                mp[ch].first = index;
                index++;
                }
            }
        }

        for(int i = 0; i < n;i++){
            char ch = s[i];
           if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                char temp = 'a' + findMax(mp);
                str.push_back(temp);
                mp[temp].second.second--; 
            }
            else{
                str.push_back(ch);
            }
        }

        return str;
    }
};