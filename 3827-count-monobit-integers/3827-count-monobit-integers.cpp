class Solution {
public:
    int countMonobit(int n) {
        int cnt = 0;

        for(int i = 0; i <= n;i++){
            int num1 = i;
            int num2 = i+1;

            if((num1 & num2) == 0) cnt++;
        }
        return cnt;
    }
};