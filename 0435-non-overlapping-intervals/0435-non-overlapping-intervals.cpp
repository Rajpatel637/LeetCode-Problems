class Solution {
private:
    static bool cmp(vector<int> p, vector<int> q) { return p[1] < q[1]; }

public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),cmp);
            
            int size = intervals.size();

            int endTime = intervals[0][1];

            int cnt = 1;


            for(int i = 1; i < size;i++){
                if(intervals[i][0] >= endTime){
                    cnt++;
                    endTime = intervals[i][1];
                }
            }

            return size - cnt;
        
    }
};