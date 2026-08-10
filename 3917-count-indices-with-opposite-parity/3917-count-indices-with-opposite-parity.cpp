class Solution {

private:

    int getParity(vector<int>& nums,int index, int n){
        int cnt = 0;

        if(nums[index] % 2 == 0){
            for(int i = index + 1; i < n;i++){
                if(nums[i] % 2){
                    cnt++;
                }
            }
        }
        else{
            for(int i = index+1; i < n;i++){
                if(nums[i] % 2 == 0){
                    cnt++;
                }
            }
        }

        return cnt;
    }

public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);

        for(int i = 0; i < n;i++){
            int sol = getParity(nums,i,n);
            ans[i] = sol;
        }

        return ans;

    }
};