class Solution {

private:

    int sumDigit(int n){
        int sum  = 0;

        while(n != 0){
            int q = n % 10;

            sum += q;

            n /= 10;
        }

        return sum;
    }

public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;

        for(int i = 0; i < nums.size();i++){
            nums[i] = sumDigit(nums[i]);
            mini = min(mini,nums[i]);
        }

        return mini;
    }
};