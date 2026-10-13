class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int size = nums.size();
        set<int> hashset;

        int l = 0;

        for(int i = 0; i < size;i++){
            if(i - l > k){
                hashset.erase(nums[l]);
                l++;
            }

            if(hashset.find(nums[i]) != hashset.end()){
                return true;
            }

            hashset.insert(nums[i]);
        }

        return false;
    }
};