class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int cnt1 = 0;
        int cnt2 = 0;

        for(int i = 0; i < nums.size();i++){
              if(nums[i] < target) cnt1++;

              if(nums[i] == target) cnt2++;
        }

        for(int i = cnt1; i < cnt1+cnt2;i++){
            ans.push_back(i);
        }

        return ans;
    }
};