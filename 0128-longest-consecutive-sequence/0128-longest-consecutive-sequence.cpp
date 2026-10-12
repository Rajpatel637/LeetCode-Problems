class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int longest = 0;

        for(auto &i : numSet){
            
            if(!numSet.count(i-1)){
                int length = 0;

                while(numSet.count(i + length)) ++length;

                longest = max(longest,length);
            }

        }

        return longest;
    }
};