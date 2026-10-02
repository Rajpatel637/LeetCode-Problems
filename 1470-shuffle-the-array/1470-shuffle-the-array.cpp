class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int e = n;
       int st = 0;
       vector<int> ans;
       while(e < 2*n){
          ans.push_back(nums[st++]);
          ans.push_back(nums[e++]);
       }
       return ans;
    }
};