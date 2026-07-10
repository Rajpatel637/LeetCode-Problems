
int spaceOpti(vector<int>& house){
    int size = house.size();

    int prev2 = 0;
    int prev1 = house[0];

    for(int i = 1; i < size;i++){
        int include = prev2 + house[i];
        int exclude = prev1 + 0;

        int ans = max(include,exclude);

        prev2 = prev1;
        prev1 = ans;
    }

    return prev1;
}


class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int> first,last;
        for(int i = 0; i < n;i++){
            if( i != 0){
                last.push_back(nums[i]);
            }

            if(i != n-1){
                first.push_back(nums[i]);
            }
        }


        return max(spaceOpti(first),spaceOpti(last));
    }
};