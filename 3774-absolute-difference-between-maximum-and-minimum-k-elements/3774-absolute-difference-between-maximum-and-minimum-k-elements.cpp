class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int eIndex = size-1;
        int i = k;
        int sIndex = 0;
        int eSum = 0;
        int sSum = 0;

        while(i != 0){
            sSum += nums[sIndex];
            eSum += nums[eIndex];
            i--;
            sIndex++;
            eIndex--;
        }

        return abs(sSum - eSum);
    }
};