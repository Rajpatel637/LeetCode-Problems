class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = word1[0];
        string s2 = word2[0];

        for(int i = 1; i < word1.size();i++){
            s1 += word1[i];
        }

        for(int i = 1; i < word2.size();i++){
            s2 += word2[i];
        }

        return s1 == s2;
    }
};