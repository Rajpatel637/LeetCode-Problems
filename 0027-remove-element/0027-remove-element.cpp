class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size()-1;
        
        int cnt = 0;

        while (i <= j){
            if(nums[i] == val){
                if(nums[j] != val){
                    cnt++;
                    swap(nums[i],nums[j]);
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
            else{
                i++;
                cnt++;
            }
        }

        return cnt;
    }
};