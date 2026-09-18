class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      unordered_map<int,bool> mp;

      vector<int> ans;

      int size = nums.size();

      for(int i = 0; i < size;i++){
        mp[nums[i]] = true;
      }

      for(int i = 1; i <= size;i++){
        if(mp.find(i) == mp.end()){
            ans.push_back(i);
        }
      }

      return ans;


    }
};