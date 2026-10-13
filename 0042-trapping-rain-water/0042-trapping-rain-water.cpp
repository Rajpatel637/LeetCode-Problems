class Solution {
public:
    int trap(vector<int>& height) {

        int size = height.size();

        int l = 0;
        int r = size - 1;

        int maxLeft = height[l];
        int maxRight = height[r];

        int sum = 0;

        while (l <= r) {

            if (maxLeft <= maxRight) {
                int tempAns = maxLeft - height[l];
                if (tempAns > 0)
                    sum += tempAns;
                maxLeft = max(maxLeft, height[l]);
                l++;
            } else {
                int tempAns = maxRight - height[r];
                if (tempAns > 0)
                    sum += tempAns;
                maxRight = max(maxRight, height[r]);
                r--;
            }
        }

        return sum;
    }
};