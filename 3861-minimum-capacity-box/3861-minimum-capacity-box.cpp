class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mini = INT_MAX;
        int index = -1;

        int size = capacity.size();

        for (int i = 0; i < size; i++) {
            if (capacity[i] >= itemSize) {

                if(capacity[i] < mini){
                    mini = min(capacity[i],mini);
                    index = i;
                }
            }
        }

        return index;
    }
};