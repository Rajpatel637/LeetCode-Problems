class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,bool> mp;
        int size = nums.size();
        vector<int> ans;
        for(int i = nums[0]; i <= nums[size-1];i++){
            mp[i] = false;
        }

        for(int k = 0; k < size;k++){
            mp[nums[k]] = true;
        }

        for(int j = nums[0]; j <= nums[size-1];j++){
            if(!mp[j]){
                ans.push_back(j);
            }
        }

        return ans;
    }
};