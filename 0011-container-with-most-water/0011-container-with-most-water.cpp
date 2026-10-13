class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxi = 0;
        int l = 0;
        int r = height.size()-1;

        while(l < r){
            int ans = (r-l) * (min(height[l],height[r]));

            maxi = max(maxi,ans);

            if(height[l] > height[r]) r--;
            else l++;
        }

        return maxi;
    }
};