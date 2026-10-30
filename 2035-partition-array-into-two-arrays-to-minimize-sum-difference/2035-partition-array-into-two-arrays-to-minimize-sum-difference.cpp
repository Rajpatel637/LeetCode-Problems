class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2;

        vector<vector<int>> left(n + 1);
        vector<vector<int>> right(n + 1);

        int minDiff = INT_MAX;

        int totalSum = 0;

        for (int i : nums)
            totalSum += i;

        // left Half

        for (int mask = 0; mask < (1 << n); mask++) {
            int cnt = 0;
            int sum = 0;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[i];
                    cnt++;
                }
            }
            left[cnt].push_back(sum);
        }

        // Right Half

        for (int mask = 0; mask < (1 << n); mask++) {
            int cnt = 0;
            int sum = 0;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sum += nums[n + i];
                    cnt++;
                }
            }
            right[cnt].push_back(sum);
        }

        //sorting
        

        for(int i = 0; i < n;i++){
            sort(right[i].begin(),right[i].end());
        }

        for(int k = 0; k <= n;k++){

            for(int m : left[k]){
                int target = (totalSum - (2*m))/2;

                auto it = lower_bound(right[n-k].begin(),right[n-k].end(),target);

                if(it != right[n-k].end()){
                    int r = *it;
                    minDiff = min(minDiff,abs(totalSum - 2 * (m + r)));
                }

                if(it != right[n-k].begin()){
                    int r = *prev(it);
                    minDiff = min(minDiff,abs(totalSum - 2 *(m+r)));
                }
            }
        }

        return minDiff;
    }
};