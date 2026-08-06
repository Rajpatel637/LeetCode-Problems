class Solution {

private:
    int getProduct(int n) {
        int x = n;

        int ans = 1;

        while (x != 0) {

            int q = x % 10;

            ans *= q;

            x = x / 10;
        }

        return ans;
    }

public:
    int smallestNumber(int n, int t) {
        int ans = getProduct(n);

        if (ans % t == 0)
            return n;
        else {
            for (int i = n + 1; i <= 100; i++) {
                int temp = getProduct(i);
                if (temp % t == 0) {
                    return i;
                }
            }
        }

        return 0;
    }
};