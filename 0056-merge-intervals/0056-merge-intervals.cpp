class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        int size = intervals.size();
        int i = 1;

        sort(intervals.begin(), intervals.end());

        if (size == 1)
            return intervals;

        result.push_back(intervals[0]);

        while (i < size) {

            if (result.back()[1] >= intervals[i][0]) {
                result.back()[0] = min(result.back()[0], intervals[i][0]);
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            } else {
                result.push_back(intervals[i]);
            }
            i++;
        }

        return result;
    }
};