class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,pair<int,vector<int>>> mp;
        int cnt = 0;

        for(int i = 0; i < nums.size();i++){
            mp[nums[i]].first++;
            mp[nums[i]].second.push_back(i);
        }

        for(auto i :mp){
            if(i.second.first == 3 && i.second.second.size() == 3){
                vector<int> temp = i.second.second;

                if(temp[1]-temp[0] == temp[2] - temp[1]) cnt++;
            }
        }

        return cnt;
    }
};