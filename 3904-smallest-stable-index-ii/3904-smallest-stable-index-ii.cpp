class Solution {

    int maxi(int m, int num) {

        return max(m,num);
    }

    int mini(int m, int num){
        return min(m,num);
    }

public:
    int firstStableIndex(vector<int>& nums, int k) {
        int size = nums.size();

        vector<int> prefixMax(size);
        vector<int> suffixMin(size);

        prefixMax[0] = nums[0];
        suffixMin[size - 1] = nums[size - 1];

        for (int i = 1; i < size; i++) {
            prefixMax[i] = maxi(prefixMax[i-1], nums[i]);
        }

        for (int i = size - 2; i >= 0; i--) {
            suffixMin[i] = mini(suffixMin[i + 1], nums[i]);
        }

        for(int i = 0; i < size;i++){
            if((prefixMax[i]-suffixMin[i]) <= k) return i;
        }

        return -1;
    }
};