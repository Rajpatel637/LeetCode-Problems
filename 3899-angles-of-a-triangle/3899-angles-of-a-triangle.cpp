#include <cmath>

class Solution {

private:

    double findAngle(vector<int> nums,int i){
        if(i == 0){
            return acos((nums[1]*nums[1] + nums[2]*nums[2] - nums[0]*nums[0]) / (2.0 * nums[1]*nums[2])) * 180.0 / acos(-1.0);
        }
        else if(i == 1){
            return acos((nums[0]*nums[0] + nums[2]*nums[2] - nums[1]*nums[1]) / (2.0 * nums[0]*nums[2])) * 180.0 / acos(-1.0);
        }
        else if(i == 2){
            return acos((nums[1]*nums[1] + nums[0]*nums[0] - nums[2]*nums[2]) / (2.0 * nums[1]*nums[0])) * 180.0 / acos(-1.0);
        }
        return 0;
    }

public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        vector<double> v;

        if(sides[0] + sides[1] > sides[2]){
             for(int i = 0; i < sides.size();i++){
                double ans = findAngle(sides,i);
                v.push_back(ans);
             }
        }
        else{
            return v;
        }

        sort(v.begin(),v.end());
        return v;
    }
};