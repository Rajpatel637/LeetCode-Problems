class Solution {

private:
    vector<vector<int>> lcs(string& s1, string& s2) {
        int l1 = s1.length();
        int l2 = s2.length();

        vector<vector<int>> ans(l1 + 1, vector<int>(l2 + 1));

        for (int i = 0; i < l1 + 1; i++) {
            for (int j = 0; j < l2 + 1; j++) {
                if (i == 0 || j == 0) {
                    ans[i][j] = 0;
                }
            }
        }

        for (int i = 1; i < l1 + 1; i++) {
            for (int j = 1; j < l2 + 1; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    ans[i][j] = 1 + ans[i - 1][j - 1];
                } else {
                    ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
                }
            }
        }

        return ans;
    }

public:
    string shortestCommonSupersequence(string str1, string str2) {
        int l1 = str1.length();
        int l2 = str2.length();

        vector<vector<int>> ans = lcs(str1,str2);

        int i = l1;
        int j = l2;
        string scs = "";

        while(i > 0 && j > 0){

            if(str1[i-1] == str2[j-1]){
               scs.push_back(str1[i-1]);
               i--;
               j--;
            }
            else{
                if(ans[i-1][j] >= ans[i][j-1]){
                    scs.push_back(str1[i-1]);
                    i--;
                }
                else {
                    scs.push_back(str2[j-1]);
                    j--;
                }
            }
        }

        while(i > 0){
            scs.push_back(str1[i-1]);
            i--;
        }

        while(j > 0){
            scs.push_back(str2[j-1]);
            j--;
        }

        reverse(scs.begin(),scs.end());
        return scs;
    }
};