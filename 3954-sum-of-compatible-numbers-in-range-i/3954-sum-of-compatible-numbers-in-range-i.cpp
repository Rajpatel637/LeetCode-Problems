class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int intial = n - k;

        int totalSum = 0;

        if (intial <= 0)
            intial = 1;

        for (int i = intial; i <= (n + k); i++) {

            if (abs(n - i) <= k && (n & i) == 0) {
                totalSum += i;
            }
        }

        return totalSum;
    }
};