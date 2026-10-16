class Solution {

private:

    static bool cmp(vector<int> p, vector<int> q){
        return (p[1]) > (q[1]);
    }

public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int sum  = 0;

        for(int i = 0; i < boxTypes.size();i++){
            if(truckSize >= boxTypes[i][0]){
                sum += (boxTypes[i][0] * boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            else{
                sum += (boxTypes[i][1] * truckSize);
                break;
            }
        }

        return sum;


    }
};