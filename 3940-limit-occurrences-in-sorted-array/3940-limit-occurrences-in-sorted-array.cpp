class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;

        int size = nums.size();
        int prev = nums[0];
        int cnt = k-1;
        ans.push_back(prev);


        for(int i = 1; i < size;i++){
            
            int curr = nums[i];

            if(curr == prev && cnt > 0){
                ans.push_back(curr);
                cnt--;
            }
            else if(curr != prev){
                prev = curr;
                cnt = k;
                ans.push_back(curr);
                cnt--;
            }
        }

        return ans;
    }
};