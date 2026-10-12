class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;

        int size = nums.size();

        int left = 1;
        int right = 1;

        ans.push_back(left);

        for(int i = 1; i < size;i++){
           left *= nums[i-1];
           ans.push_back(left);
        }

        ans[size-1] = ans[size-1] * right;

        for(int i = size-2;i >= 0;i--){
           right *= nums[i+1];
           ans[i] = ans[i] * right;
        }

        return ans;
    }
};