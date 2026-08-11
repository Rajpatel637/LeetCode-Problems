class Solution {

private:
    int avg(vector<int>& nums, int index) {
        int avgSum = 0;

        int size = nums.size() - (index + 1);

        for (int i = index + 1; i < nums.size(); i++) {
            avgSum += nums[i];
        }

        avgSum = avgSum / size;
        return avgSum;
    }

public:
    int dominantIndices(vector<int>& nums) {

        int size = nums.size();
        int cnt = 0;

        for (int i = 0; i < size - 1; i++) {
            if (nums[i] > avg(nums, i)) {
                cnt++;
            }
        }

        return cnt;
    }
};