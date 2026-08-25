class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool> v(101,false);

        for(int i = 0; i < nums.size();i++){
            if(nums[i] % k == 0){
                v[nums[i]/k] = true;
            }
        }

        for(int i = 1; i < v.size();i++){
            if(!v[i]) return i * k;
        }

        return 101;


    }
};