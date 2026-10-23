class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n * (n + 1);
        totalSum = totalSum / 2;

        int tempSum = 0;

        for(int i = 1; i <= n;i++){
            tempSum += i;

            if(tempSum == totalSum) return i;
            else totalSum -= i;
        }

        return -1;
    }
};