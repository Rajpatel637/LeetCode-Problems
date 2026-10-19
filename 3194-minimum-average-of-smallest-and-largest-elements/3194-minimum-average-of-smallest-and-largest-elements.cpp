class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double minElement = INT_MAX;

        sort(nums.begin(),nums.end());

        int l = 0;
        int r = nums.size() - 1;
        while (l < r) {
            double mini = (nums[l] + nums[r]) / 2.0;

            minElement = min(minElement, mini);

            l++;
            r--;
        }

        return minElement;
    }
};