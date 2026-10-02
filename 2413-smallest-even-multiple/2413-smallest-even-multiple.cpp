class Solution {
public:
    int smallestEvenMultiple(int n) {
        int cnt = 1;
        while(true){
           if(cnt % 2 == 0 && cnt % n == 0) return cnt;
           cnt++;
        }

        return cnt;
    }
};