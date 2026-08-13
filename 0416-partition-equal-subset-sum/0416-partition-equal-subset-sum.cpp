class Solution {

private:
    bool subsetSum(vector<int>& nums, int n, int sum) {
        vector<vector<bool>> ans(n + 1, vector<bool>(sum + 1));

        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++) {
                if (i == 0) {
                    ans[i][j] = false;
                }

                if (j == 0)
                    ans[i][j] = true;
            }
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < sum + 1; j++) {
                if (nums[i - 1] <= j) {
                    ans[i][j] = ans[i - 1][j - nums[i - 1]] || ans[i - 1][j];
                } else {
                    ans[i][j] = ans[i - 1][j];
                }
            }
        }

        return ans[n][sum];
    }

public:
    bool canPartition(vector<int>& nums) {

        int maxSum = 0;
        int n = nums.size();

        for(int i = 0;i < n;i++){
            maxSum += nums[i];
        }

        if(maxSum % 2 == 0){
            return subsetSum(nums,n,maxSum/2);
        }
        else{
            return false;
        }
    }
};