class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,bool> mp;
        vector<int> ans;

        for(int i = 0; i < friends.size();i++){
            mp[friends[i]] = true;
        }

        for(int i = 0; i < order.size();i++){
            if(mp.find(order[i]) != mp.end()) ans.push_back(order[i]);
        }

        return ans;
    }
};