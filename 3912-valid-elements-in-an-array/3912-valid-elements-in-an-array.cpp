class Solution {

private:
    bool checkMax(vector<int>& nums, int index, int size) {

        int left = INT_MIN;
        int right = INT_MIN;

        // for left 0 to i-1

        for (int i = 0; i < index ; i++) {
            left = max(left, nums[i]);
        }

        // for right i+1 to size-2;

        for (int i = index + 1; i < size; i++) {
            right = max(right, nums[i]);
        }

        bool leftAns = false;
        bool rightAns = false;

        if (nums[index] > left)
            leftAns = true;

        if (nums[index] > right)
            rightAns = true;

        return leftAns | rightAns;
    }

public:
    vector<int> findValidElements(vector<int>& nums) { 
        int size = nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
         
        for(int i = 1; i < size;i++){
            if(checkMax(nums,i,size)){
                ans.push_back(nums[i]);
            }
        }

        return ans;
    
    
    }
};