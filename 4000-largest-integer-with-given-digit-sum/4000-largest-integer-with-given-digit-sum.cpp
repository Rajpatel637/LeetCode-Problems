class Solution {

private:

    int digitSum(int num){
        int sum =0;

        while(num > 0){
            int q = num % 10;

            sum += q;

            num /= 10;
        }

        return sum;
    }

public:
    int largestInteger(int n, int s) {
        
        if(s == 0) return 0;

        if(n == 1){
            for(int i = 9; i >= 0;i--){
                if(digitSum(i) == s) return i;
            }
        }
        else if(n == 2){
            for(int i = 99; i >= 10;i--){
                if(digitSum(i) == s) return i;
            }
        }
        else if(n == 3){
            for(int i = 999; i >= 100;i--){
                if(digitSum(i) == s) return i;
            }
        }
        else if(n == 4){
            for(int i = 9999; i >= 1000;i--){
                if(digitSum(i) == s) return i;
            }
        }
        else{
            for(int i = 99999; i >= 10000;i--){
                if(digitSum(i) == s) return i;
            }
        }

        return -1;
    }
};