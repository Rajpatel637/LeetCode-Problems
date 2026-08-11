class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,bool> mp;
        vector<int> v;

        for(int i = 0; i < bulbs.size();i++){
            mp[bulbs[i]] = false;
        }

        for(int i = 0 ; i < bulbs.size();i++){
            if(mp[bulbs[i]]){
                mp[bulbs[i]] = false;
            }
            else {
                mp[bulbs[i]] = true;
            }
        }

        for(auto &it : mp){
            if(it.second){
                v.push_back(it.first);
            }
        }

        sort(v.begin(),v.end());

        return v;
    }
};