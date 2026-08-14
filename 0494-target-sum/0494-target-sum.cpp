class Solution {

private: 
    int countSubsetSum(int n, int sum, vector<int> &arr){
    vector<vector<int>> ans(n+1,vector<int>(sum+1));

    for(int i = 0; i < n+1;i++){
        for(int j = 0; j < sum+1;j++ ){
            if(i == 0) ans[i][j] = 0;

            if(j == 0) ans[i][j] = 1;
        }
    }

    for(int i = 1; i < n+1;i++){
        for(int j = 0; j < sum+1;j++){
            if(arr[i-1] <= j){
                ans[i][j] = (ans[i-1][j] + ans[i-1][j-arr[i-1]]);
            }
            else{
                 ans[i][j] = ans[i-1][j];
            }
        }
    }

    return ans[n][sum] ;
}

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        int maxSum = 0;

        for(int i = 0; i < n;i++){
            maxSum += nums[i];
        }

        if(target > maxSum || target < -maxSum || (target+maxSum) % 2 != 0 ) return 0;

        int sum = (target+maxSum)/2;

        return countSubsetSum(n,sum,nums);
    }
};