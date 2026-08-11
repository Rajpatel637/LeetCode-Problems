class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;

        for(int i = 0; i < s.length();i++){
            char ch = s[i];

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v++;
            }
            else if(ch >= 'a' && ch <= 'z'){
                c++;
            }
        }

        if(c > 0) return floor(v/c);
        return 0;
    }
};