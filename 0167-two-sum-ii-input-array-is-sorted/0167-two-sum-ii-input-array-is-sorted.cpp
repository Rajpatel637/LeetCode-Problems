class Solution {

private:
    int binarySearch(vector<int>& numbers, int st, int e, int t) {
        int mid = st + (e - st) / 2;

        while (st <= e) {

            if (numbers[mid] == t)
                return mid;
            else if (numbers[mid] > t) {
                e = mid - 1;
            } else {
                st = mid + 1;
            }

            mid = st + (e - st) / 2;
        }

        return -1001;
    }

public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int size = numbers.size();
        vector<int> v;

        for (int i = 0; i < size; i++) {
            int t = target - numbers[i];

            int ans = binarySearch(numbers, i + 1, size - 1, t);

            if (ans != -1001) {
                v.push_back(i + 1);
                v.push_back(ans + 1);
                return v;
            }
        }

        return v;
    }
};