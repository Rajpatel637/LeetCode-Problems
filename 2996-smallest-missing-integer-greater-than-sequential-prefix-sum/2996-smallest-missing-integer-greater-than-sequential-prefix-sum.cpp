class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,bool> mp;

        int prefixSum = nums[0];

        int mini = INT_MIN;

        for(int i = 1; i < n;i++){
            if(nums[i] == nums[i-1] + 1){
                prefixSum += nums[i];
            }
            else{
                mini = max(prefixSum,mini);
                break;
            }
            
            
        }
        mini = max(prefixSum,mini);

        for(int i = 0; i < n;i++){
            mp[nums[i]] = true;
        }

        
        while(true){
            if(mp.find(mini) != mp.end()){
                mini++;
            }
            else{
                return mini;
            }
        }    
    }
};