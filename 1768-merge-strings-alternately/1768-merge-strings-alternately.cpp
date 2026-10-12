class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1 = word1.length();
        int size2 = word2.length();

        int i = 0;
        int j = 0;

        string str = "";

        while (i < size1 && j < size2) {

            str += word1[i];
            str += word2[j];
            i++;
            j++;
        }

        while (i < size1) {
            str += word1[i];
            i++;
        }

        while (j < size2) {
            str += word2[j];
            j++;
        }

        return str;
    }
};