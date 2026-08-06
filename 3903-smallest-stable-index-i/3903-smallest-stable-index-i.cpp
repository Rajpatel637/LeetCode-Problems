class Solution {

private:
    int minMax(vector<int>& nums, int k, int index) {
        int mini = INT_MAX;
        int size = nums.size();

        int maxi = INT_MIN;

        for (int i = index; i < size; i++) {
            mini = min(mini, nums[i]);
        }

        for (int j = 0; j <= index; j++) {
            maxi = max(maxi, nums[j]);
        }

        return maxi - mini;
    }

public:
    int firstStableIndex(vector<int>& nums, int k) {

        int size = nums.size();
        int index = -1;

        for (int i = 0; i < size; i++) {
            int ans = minMax(nums, k, i);

            if (ans <= k) {
                return i;
            }
        }

        return index;
    }
};