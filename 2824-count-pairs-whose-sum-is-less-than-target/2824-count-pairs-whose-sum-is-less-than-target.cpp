class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int size = nums.size();
        int cnt = 0;
        int st = 0;
        int e = 1;

        sort(nums.begin(), nums.end());

        while (st < size - 1) {

            if (st != e && ((nums[st] + nums[e]) < target))
                cnt++;
            
            if (e == size - 1) {
                st++;
                e = st + 1;
            }
            else{
                e++;
            }
        }

        return cnt;
    }
};