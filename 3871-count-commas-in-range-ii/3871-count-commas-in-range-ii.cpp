class Solution {
public:
    long long countCommas(long long n) {
        long long int sum = 0;

        if(n < 1000) return 0;

        if(n >= 1000 ) sum += min(n, 999999LL) - 1000 + 1;

        if(n >= 1000000 )  sum += (min(n, 999999999LL) - 1000000 + 1) * 2;

        if(n >= 1000000000LL)  sum += (min(n, 999999999999LL) - 1000000000LL + 1) * 3;

        if(n >= 1000000000000LL) sum += (n - 1000000000000LL + 1) * 4;

        if(n == 1000000000000000LL) sum += 5 - 4;

        return sum;

    }
};