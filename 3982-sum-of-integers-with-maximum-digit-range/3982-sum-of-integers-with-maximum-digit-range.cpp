class Solution {

private:
    int diffNum(int n) {
        int x = n;
        int mini = INT_MAX;
        int maxi = INT_MIN;

        while (x != 0) {
            int q = x % 10;
            maxi = max(q, maxi);
            mini = min(q, mini);
            x = x / 10;
        }

        return maxi - mini;
    }

public:
    int maxDigitRange(vector<int>& nums) {
        vector<pair<int, int>> v;
        int size = nums.size();
        int maxSum = 0;

        int maxDigit = INT_MIN;

        for (int i = 0; i < size; i++) {
            int ans = diffNum(nums[i]);
            v.push_back({nums[i], ans});
            maxDigit = max(maxDigit, ans);
        }

        for (int i = 0; i < size; i++) {
            if (v[i].second == maxDigit) {
                maxSum += v[i].first;
            }
        }

        return maxSum;
    }
};