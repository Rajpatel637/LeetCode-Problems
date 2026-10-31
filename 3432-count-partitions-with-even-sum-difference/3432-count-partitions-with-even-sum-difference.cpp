class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for(int i = 0; i < nums.size();i++){
            sum += nums[i];
            nums[i] = sum;
        }

        int cnt = 0;

        for(int i = 0; i < n-1;i++){
            int left = nums[i];
            int right = nums[n-1] - left;

            if(abs(left-right) % 2 == 0) cnt++; 
        }

        return cnt;
    }
};