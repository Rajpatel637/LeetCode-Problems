class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int sumPeak = 0;
        int sumVal = 0;

        int size = nums.size();

        for(int i = 1; i < size-1;i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) sumPeak += nums[i];
            else {
                if(nums[i] < nums[i-1] && nums[i] < nums[i+1]){
                    sumVal += nums[i];
                }
            }
        }

        return sumPeak - sumVal;
    }
};