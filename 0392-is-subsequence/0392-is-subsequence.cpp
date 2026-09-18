class Solution {
public:
    bool isSubsequence(string s, string t) {
       int sIndex = 0;
       int tIndex = 0;
       int tSize = t.length();

       while(tIndex < tSize){
          if(s[sIndex] == t[tIndex]){
            sIndex++;
            tIndex++;
          }
          else{
            tIndex++;
          }
       }
       if(tIndex >= tSize && sIndex < s.length()) return false;
       else return true; 
    }
};