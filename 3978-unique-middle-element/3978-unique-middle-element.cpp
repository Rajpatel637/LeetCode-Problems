class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> mp;

        for(int i = 0; i < n;i++){
            mp[nums[i]]++;
        }

        int mid = n/2;

        if(mp[nums[mid]] == 1) return true;
        else return false;
    }
};