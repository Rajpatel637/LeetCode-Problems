class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;

        for(int i = 0; i < nums.size();i++){
            int sub = nums[i] - 1;
            int add = nums[i] + 1;
            if(sub % 3 == 0 || add % 3 == 0) cnt++;
        }
        return cnt;
    }
};