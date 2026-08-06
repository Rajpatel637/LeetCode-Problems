class Solution {

private:
     
    pair<int,int> leftRightSum(vector<int>&nums,int size,int index){
        int left = 0;
        int right = 0;

        for(int i = 0; i < index;i++){
            left += nums[i];
        }

        for(int i = index+1; i < size;i++){
            right += nums[i];
        }

        return{left,right};


    }

public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int size = nums.size();

        vector<int> leftSum(size,0);
        vector<int> rightSum(size,0);
        vector<int> ans(size);

        for(int i = 0; i < size;i++){
            pair<int,int> temp = leftRightSum(nums,size,i);
            leftSum[i] = temp.first;
            rightSum[i] = temp.second;
            ans[i] = abs(leftSum[i]-rightSum[i]);
        }

        return ans;

    }
};