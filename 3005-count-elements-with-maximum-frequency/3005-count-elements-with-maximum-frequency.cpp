#include <climits>
#include <unordered_map>

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxFreq = INT_MIN;

        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
            maxFreq = max(maxFreq,mp[nums[i]]);
        }

        int maxSum = 0;
        int element = INT_MIN;
        for(auto it = mp.begin(); it != mp.end();it++){
            if(it->second == maxFreq && element != it->first){
                maxSum += it->second;
                element = it->first;
            }
        }

        return maxSum;
    }
};