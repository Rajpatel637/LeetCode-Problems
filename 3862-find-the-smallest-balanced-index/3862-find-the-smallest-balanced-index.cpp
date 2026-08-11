class Solution {

private:
    bool getIndex(vector<int>& nums, int index,
                  unordered_map<int, long long int>& mp1,
                  unordered_map<int, long long int>& mp2) {

        long long int sumLeft = 0;
        long long int prodRight = 1;
        if (index == 0)
            sumLeft = 0;
        else
            sumLeft = mp1[index];

        if (index == nums.size() - 1)
            prodRight = 1;
        else
            prodRight = mp2[index];

        if (sumLeft == prodRight)
            return true;
        return false;
    }

public:
    int smallestBalancedIndex(vector<int>& nums) {
        int size = nums.size();

        if (size == 1)
            return -1;
        unordered_map<int, long long int> mp1;
        unordered_map<int, long long int> mp2;
        long long int maxSum = 0;
        long long int maxProd = 1;

        for (int i = 1; i < size; i++) {
            maxSum += nums[i - 1];
            mp1[i] = maxSum;
        }
        for (int i = size - 2; i >= 0; i--) {
            if (maxProd > 1e14 / nums[i+1]) {
                maxProd = 1e14;
            } else {
                maxProd *= nums[i+1];
            }
            mp2[i] = maxProd;
        }

        for (int i = 0; i < size; i++) {

            if (getIndex(nums, i, mp1, mp2))
                return i;
        }

        return -1;
    }
};