class Solution {

public:
    bool threeFibonacciSum(int n) {
        int a = 0;
        int b = 1;

        while(a+b <= n){
            int temp = a+b;
            if(a+b+temp == n) return true;
            a = b;
            b = temp;
        }

        return false;
    }
};