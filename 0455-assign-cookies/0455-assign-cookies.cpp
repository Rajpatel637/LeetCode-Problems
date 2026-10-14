class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int l = 0, r = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int size1 = s.size();
        int size2 = g.size();

        while (l < size1 && r < size2) {

            if (s[l] >= g[r]) {
                r++;
            } 
            l++;
        }

        return r;
    }
};