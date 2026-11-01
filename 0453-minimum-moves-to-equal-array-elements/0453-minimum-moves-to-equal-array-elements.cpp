class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0;

        int num = nums[0];

        for(int i = 1; i < nums.size();i++){
            cnt += (nums[i]-num);
        }
        return cnt;
    }
};