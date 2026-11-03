class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int cnt = 0;

        int n = nums.size();
        int num = nums[n - 1];
        for (int i = 0; i < n; i++) {
            cnt += abs(nums[i] - num);
        }

        return cnt;
    }
};