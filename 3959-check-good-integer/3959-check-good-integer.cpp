class Solution {

private:
   
    int getDiff(int n){
        int x = n;

        int square = 0;
        int sum = 0;

        while(x != 0){
           
           int q = x % 10;

           sum += q;
           square += q*q;

           x = x / 10;
        }

        return square - sum;
    } 

public:
    bool checkGoodInteger(int n) {
        int ans = getDiff(n);

        return ans >= 50 ? true : false;
    }
};