class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int sum = 0;
        for(int i = 0; i < t;i++){
            num = num+1;
            sum = (num)+1;
            num = sum;
        }

        return sum;
    }
};