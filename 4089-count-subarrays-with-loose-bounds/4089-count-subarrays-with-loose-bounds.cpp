class Solution {

public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {

        int l = 0, r = 0;

        int size = nums.size();

        long long length = 0;
        long long ans = 0;
        while (r < size) {

            if (nums[r] < minK) {
                ans += (length * (length + 1)) / 2;
                length = 0;
                l = r + 1;
            }

            if (nums[r] >= minK && nums[r] <= maxK)
                length = r - l + 1;

            if (nums[r] > maxK) {

                ans += (length * (length + 1)) / 2;
                l = r + 1;
                length = 0;
            }
            r++;
        }

        ans += (length * (length + 1)) / 2;

        return ans;
    }
};