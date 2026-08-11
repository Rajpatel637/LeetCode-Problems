class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_map<int,int> finalMp;

        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto &it : mp){
            finalMp[it.second]++;
        }

        for(int i = 0; i < nums.size();i++){
            if(finalMp[mp[nums[i]]] == 1){
                return nums[i];
            }
        }

        return -1;
    }
};