class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

        int shift = 0;
        while (left != right) {
            if (left == 0 || right == 0)
                return 0;

            left = left >> 1;
            right = right >> 1;
            shift++;
        }

        return left << shift;
    }
};