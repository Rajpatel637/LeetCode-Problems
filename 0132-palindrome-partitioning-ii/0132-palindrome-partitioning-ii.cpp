class Solution {

    vector<vector<int>> ans = vector<vector<int>>(2001, vector<int>(2001, -1));
    vector<vector<int>> palindrome =
        vector<vector<int>>(2001, vector<int>(2001, -1));

    bool isPalindrome(string& s, int start, int end) {

        if(palindrome[start][end] != -1) return palindrome[start][end];
        int orgStart = start;
        int orgEnd = end;
        while (start < end) {
            if (s[start] != s[end]) {
                palindrome[orgStart][orgEnd] = 0;
                return false;
            }

            start++;
            end--;
        }

        palindrome[orgStart][orgEnd] = 1;
        return true;
    }

    int solve(string& s, int i, int j) {
        if (i >= j)
            return 0;

        if (isPalindrome(s, i, j)) {
            return 0;
        }

        if (ans[i][j] != -1)
            return ans[i][j];

        int left = 0;
        int right = 0;
        int minAns = INT_MAX;
        for (int k = i; k <= j - 1; k++) {

            if (isPalindrome(s, i, k)) {
                minAns = min(minAns, 1 + solve(s, k + 1, j));
            }
        }

        return ans[i][j] = minAns;
    }

public:
    int minCut(string s) { return solve(s, 0, s.length() - 1); }
};