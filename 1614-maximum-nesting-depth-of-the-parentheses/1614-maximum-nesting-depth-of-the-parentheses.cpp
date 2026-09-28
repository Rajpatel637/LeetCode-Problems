class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int maxCount = INT_MIN;
        
        int size = s.length();

        for(int i = 0;i < size;i++){
            if(s[i] == '(') cnt++;
            else if(s[i] == ')') cnt--;
            maxCount = max(maxCount,cnt);
        }

        return maxCount;
    }
};