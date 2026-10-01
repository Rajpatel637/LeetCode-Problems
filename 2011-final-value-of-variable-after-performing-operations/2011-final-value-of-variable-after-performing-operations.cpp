class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;

        for (int i = 0; i < operations.size(); i++) {
            string s = operations[i];
            if (s == "--X" || s == "X--")
                ans -= 1;
            else
                ans += 1;
        }

        return ans;
    }
};