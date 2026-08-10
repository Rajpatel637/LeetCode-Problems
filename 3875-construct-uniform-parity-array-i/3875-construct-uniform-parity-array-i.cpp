class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // if(nums1[0] % 2 == 0 || (nums1[0] - nums1[1]) % 2 == 0){
        //     int left = false;
        //     int right = false;
        //     for(int i = 0; i < nums1.size();i++){
        //         if(nums1[i] % 2 != 0) left = true;

        //         if(i < nums1.size()-1 && (nums1[i] - nums1[i+1]) % 2 != 0) right = true;

        //         if(left && right) return false;
        //     }
        // }
        // else{
        //     int l = false;
        //     int r = false;
        //     for(int i = 0; i < nums1.size();i++){
        //         if(nums1[i] % 2 == 0) l = true;

        //         if(i < nums1.size()-1 && (nums1[i] - nums1[i+1]) % 2 == 0) r = true;

        //         if(l && r) return false;
        //     }
        // }

        return true;
    }
};