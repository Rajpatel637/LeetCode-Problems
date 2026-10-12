class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();

        for(auto &i : nums){
            if(i < 0) i = 0;
        }

        for(int i = 0; i < size;i++){
            int val = abs(nums[i]);

            if(val >=1 && val <= size){
                if(nums[val-1] > 0) nums[val-1] *= -1;
                else if(nums[val-1] == 0) nums[val-1] = -1 * (size + 1);
            }
        }

        for(int i = 1; i < size+1;i++){
            if(nums[i-1] >= 0) return i;
        }

        return size+1;
    }
};