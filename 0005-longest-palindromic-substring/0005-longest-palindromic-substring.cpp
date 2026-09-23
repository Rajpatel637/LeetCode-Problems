class Solution {

    string lcs(string& s1, string& s2) {

        int l = s1.length();
        vector<vector<int>> ans(l + 1, vector<int>(l + 1));

        int maxLength = 0;
        string str = "";

        for (int i = 0; i < l + 1; i++) {
            for (int j = 0; j < l + 1; j++) {
                if (i == 0 || j == 0) {
                    ans[i][j] = 0;
                }
            }
        }

        for (int i = 1; i < l + 1; i++) {
            for (int j = 1; j < l + 1; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    ans[i][j] = 1 + ans[i - 1][j - 1];

                    if (ans[i][j] > maxLength) {
                        if (checkPalindrome(
                                s1.substr(i - ans[i][j], ans[i][j]))) {
                            maxLength = ans[i][j];
                            str = s1.substr(i - ans[i][j], ans[i][j]);
                        }
                    }

                } else {
                    ans[i][j] = 0;
                }
            }
        }

        return str;
    }

    bool checkPalindrome(string s) {
        int st = 0;
        int e = s.length() - 1;

        while (st < e) {
            if (s[st] != s[e])
                return false;

            st++;
            e--;
        }

        return true;
    }

public:
    string longestPalindrome(string s) {
        string revStr = s;
        reverse(revStr.begin(), revStr.end());

        return lcs(s, revStr);
    }
};