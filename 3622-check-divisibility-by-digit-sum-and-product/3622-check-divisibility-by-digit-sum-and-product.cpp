class Solution {

private:
    bool isDiv(int n) {
        int x = n;
        int sum = 0;
        int product = 1;

        while (x != 0) {
            int q = x % 10;

            sum += q;
            product *= q;

            x = x/10;
        }

        return n % (sum + product) == 0 ? true:false;
    }

public:
    bool checkDivisibility(int n) {
        return isDiv(n);
    }
};