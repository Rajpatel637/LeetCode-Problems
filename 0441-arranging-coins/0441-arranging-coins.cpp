class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;
        int num = n;

        for(int i = 1; i <= n;i++){
            if(num >= i){
                num -= i;
                cnt++;
            }
            else{
                return cnt;
            }
        }

        return cnt;
    }
};