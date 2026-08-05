class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        int end = size-1;
        for(int i = 0; i < size;i++){
            ans.push_back(nums[i]);
        }
        while(end >= 0){
            ans.push_back(nums[end]);
            end--;
        }

        return ans;
    }
};