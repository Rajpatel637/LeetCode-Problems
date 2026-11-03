class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();

        int bitZero = 0;
        int bitOne = 0;

        long long cnt = 0;

        for(int i = 0; i < n;i++){
            cnt = cnt ^ nums[i];
        }

        long long rightMost = (cnt & (cnt-1)) ^ cnt;

        for(int i = 0; i < n;i++){
            int tempNum = nums[i];
            if(tempNum & rightMost){
                bitOne ^= tempNum;
            }
            else{
                bitZero ^= tempNum;
            }
        }

        return {bitZero,bitOne};
    }
};