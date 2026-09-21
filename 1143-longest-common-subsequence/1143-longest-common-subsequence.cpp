class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int size1 = text1.length();
        int size2 = text2.length();
        vector<vector<int>> ans(size1+1,vector<int>(size2+1));

        for(int i = 0; i < size1+1;i++){
            for(int j = 0; j < size2+1;j++){
                if(i == 0 || j == 0){
                    ans[i][j] = 0;
                }
            }
        }

        for(int i = 1; i < size1+1;i++){
            for(int j =1; j < size2+1;j++){
                if(text1[i-1] == text2[j-1]){
                    ans[i][j] = 1 + ans[i-1][j-1];
                }
                else{
                    ans[i][j] = max(ans[i-1][j],ans[i][j-1]);
                }
            }
        }

        return ans[size1][size2];
    }
};