class Solution {
public:
    int scoreOfString(string s) {
        int absSum = 0;

        for(int i = 0; i < s.length()-1;i++){
            int ans1 = s[i];
            int ans2 = s[i+1];

            absSum += abs(ans1-ans2);
        }

        return absSum;
    }
};