class Solution {

private:
    int getSum(int num) {
        int x = num;
        int sum = 0;

        while (x != 0) {
            int q = x % 10;
            sum += q;
            x /= 10;
        }

        return sum;
    }

public:
    int addDigits(int num) {
        if (num >= 0 && num <= 9)
            return num;

        int sum = num;

        while (true) {
            sum = getSum(sum);
            if (sum >= 0 && sum <= 9)
                return sum;
        }

        return -1;
    }
};