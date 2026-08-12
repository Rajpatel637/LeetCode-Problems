class Solution {

private:
    void rev(string& s, int st, int e) {
        while (st < e) {
            swap(s[st], s[e]);
            st++;
            e--;
        }
    }

    int vowelCount(string& s, int st, int e) {
        int cnt = 0;
        for (int i = st; i <= e; i++) {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                cnt++;
        }

        return cnt;
    }

public:
    string reverseWords(string s) {

        int spaceIndex = 0;
        int cnt = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                spaceIndex = i;
                break;
            }
            char ch = s[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                cnt++;
        }

        if(spaceIndex == 0) return s;

        int first = spaceIndex + 1;

        for (int i = spaceIndex + 1; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (cnt == vowelCount(s, first, i-1)) {
                    rev(s, first, i - 1);
                    first = i + 1;
                }
                else{
                    first = i+1;
                }

                 
            }
        }

        if(cnt == vowelCount(s,first,s.length()-1)){
            rev(s,first,s.length()-1);
        }

        return s;
    }
};