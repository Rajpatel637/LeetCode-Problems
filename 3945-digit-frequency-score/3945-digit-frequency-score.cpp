class Solution {

private:
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, pair<int, bool>> mp;

        int maxSum = 0;

        int x = n;

        while (x != 0) {
            int q = x % 10;

            mp[q].first++;

            x = x / 10;
        }

        x = n;

        while (x != 0) {
            int q = x % 10;

            if (!mp[q].second) {
                maxSum += q * mp[q].first;
                mp[q].second = true;
            }

            x = x / 10;
        }

        return maxSum;
    }
};