class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        

        sort(nums.begin(),nums.end());

        int num = nums[n/2];

        for(int i = 0; i < n;i++){
            sum += abs(nums[i]-num);
        }

        return sum;
    }
};