class Solution {

private:

    int getRev(int n){
        int x = n;
        int ans = 0;

        while(x != 0){
            int q = x % 10;
            
            ans = ans * 10 + q;

            x /= 10;
        }

        return abs(n - ans);
    }

public:
    int mirrorDistance(int n) {
        return getRev(n); 
    }
};