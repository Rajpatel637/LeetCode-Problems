class Solution {
public:
    int countDigits(int num) {
        

        int temp = num;


        int cnt = 0;

        while(temp > 0){
            int q = temp % 10;

            if((num % q) == 0) cnt++;

            temp /= 10;
        }

        return cnt;
    }
};