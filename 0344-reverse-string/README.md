# 0344. Reverse String

> **[View on LeetCode](https://leetcode.com/problems/reverse-string/)** &nbsp;|&nbsp; 🟢 Easy

## 📊 Details

| Field | Info |
|-------|------|
| **Difficulty** | 🟢 Easy |
| **Topics** | `Two Pointers` `String` |
| **Language** | C++ |
| **Runtime** | 0 ms |
| **Memory** | 27.3 MB |
| **Solved** | 2026-06-23 |

---

## 📝 Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

Example 1:

```
**Input:** s = ["h","e","l","l","o"]
**Output:** ["o","l","l","e","h"]

```
Example 2:

```
**Input:** s = ["H","a","n","n","a","h"]
**Output:** ["h","a","n","n","a","H"]

```

 

**Constraints:**

	- `1 <= s.length <= 10^5`

	- `s[i]` is a printable ascii character.

---

## 💡 Solution

```cpp
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
```
