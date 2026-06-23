// 0217. Contains Duplicate
// Difficulty : Easy
// Topics     : Array, Hash Table, Sorting
// Runtime    : 62 ms  |  Memory : 92.9 MB
// Solved     : 2026-06-23
// Link       : https://leetcode.com/problems/contains-duplicate/
// ---------------------------------------------------------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }

        for(int i : nums){
            if(mp[i] >= 2) return true;
        }
        return false;
    }
};