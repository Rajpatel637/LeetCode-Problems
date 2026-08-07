class Solution {

private:
     
    int countCheck(int num,int digit){
        int x = num;
        int cnt = 0;
        while(x != 0){
            int q = x % 10;
            if(digit == q) cnt++;
            x = x / 10;
        }

        return cnt;
    }
     
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        
        int totalCount = 0;

        for(int i = 0; i < nums.size();i++){
            int ans = countCheck(nums[i],digit);

            totalCount += ans;
        }

        return totalCount;
    }
};