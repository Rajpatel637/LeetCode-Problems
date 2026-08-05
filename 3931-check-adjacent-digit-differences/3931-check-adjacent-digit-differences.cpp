class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {

        int size = s.length();

        int left = 0;
        int right = 1;

        while(right < size){
            int l = s[left];
            int r = s[right];
            if(abs(l - r) > 2) return false; 

            left++;
            right++;
        }

        return true;
    }
};