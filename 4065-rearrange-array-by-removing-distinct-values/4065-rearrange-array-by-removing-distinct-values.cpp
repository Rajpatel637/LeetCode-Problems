class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> mp;
        int size = nums.size();
        vector<int> ans;

        for(int i = 0; i < size;i++){
            mp[nums[i]]++;
        }

        int total = size;

        while(total != 0){
            for(auto &i : mp){
                if(i.second >= 1){
                    ans.push_back(i.first);
                    i.second--;
                    total--;
                }
            }
        }

        return ans;
    }
};