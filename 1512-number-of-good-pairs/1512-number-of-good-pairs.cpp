class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        int countPairs = 0;

        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto &i : mp){
            int value = i.second;
            int temp = (value) * (value-1);
            temp /= 2;
            countPairs += temp; 
        }

        return countPairs;
    }
};