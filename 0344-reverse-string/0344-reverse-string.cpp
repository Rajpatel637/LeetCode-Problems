// 0344. Reverse String
// Difficulty : Easy
// Topics     : Two Pointers, String
// Runtime    : 0 ms  |  Memory : 27.3 MB
// Solved     : 2026-06-23
// Link       : https://leetcode.com/problems/reverse-string/
// ---------------------------------------------------------

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;

        while(start < end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};