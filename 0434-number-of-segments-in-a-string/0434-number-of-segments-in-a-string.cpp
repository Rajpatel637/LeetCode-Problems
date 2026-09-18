class Solution {
public:
    int countSegments(string s) {
        int size = s.length();
        int cnt = 0;
        for(int i = 0; i < size;i++){
            if(s[i] == ' ' || i == size-1){
                if(i != 0 && s[i] != s[i-1]) cnt++;
                else if(i == size-1 && s[i] != ' ') cnt++;
            }
        }
        return cnt;
    }
};