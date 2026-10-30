class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int oneDigit = 0;

        int doubleDigit = 0;

        for(int i = 0; i < nums.size();i++){
            if(nums[i] >=1 && nums[i] <= 9) oneDigit += nums[i];
            else doubleDigit += nums[i];
        }

        if(doubleDigit > oneDigit || oneDigit > doubleDigit) return true;
        return false;
    }
};