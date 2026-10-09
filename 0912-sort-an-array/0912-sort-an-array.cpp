class Solution {
private:
    void merge(vector<int>& nums, int l, int m, int r) {
        vector<int> left(nums.begin() + l, nums.begin() + m + 1);
        vector<int> right(nums.begin() + m + 1, nums.begin() + r + 1);

        int i = l;
        int j = 0;
        int k = 0;
        int size1 = left.size();
        int size2 = right.size();

        while (j < size1 && k < size2) {
            if (left[j] <= right[k]) {
                nums[i] = left[j];
                j++;
            } else {
                nums[i] = right[k];
                k++;
            }

            i++;
        }

        while (j < size1) {
            nums[i] = left[j];
            j++;
            i++;
        }

        while (k < size2) {
            nums[i] = right[k];
            k++;
            i++;
        }
    }

    void getArray(vector<int>& nums, int l, int r) {
        if (l == r)
            return ;

        int m = (l + r) / 2;

        getArray(nums, l, m);
        getArray(nums, m + 1, r);

        merge(nums, l, m, r);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size()-1;

        getArray(nums,0,size);

        return nums;
    }
};