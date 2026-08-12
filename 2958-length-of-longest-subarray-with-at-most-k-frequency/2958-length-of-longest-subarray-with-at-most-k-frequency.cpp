class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int size = nums.size();
        unordered_map<int, int> mp;

        int l = 0;
        int r = 0;
        int maxLength = 0;
        int length = 0;

        while (r < size) {
            int temp = nums[r];

            if (mp.find(temp) == mp.end()) {
                mp[temp]++;
            } else {
                if (mp[temp] < k) {
                    mp[temp]++;
                } else {
                    mp[temp]++;
                    while (mp[temp] > k) {
                        mp[nums[l]]--;
                        l++;
                    }
                }
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        }

        return maxLength;
    }
};