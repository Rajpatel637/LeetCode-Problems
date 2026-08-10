class Solution {

private:

    int findPeak(vector<int> nums,int size){
        
        for(int i = 0; i < size;i++){
            if(nums[i] < nums[i+1] && nums[i+1] > nums[i+2]){
                return i+1;
            }
        }

        return 0;
    }

public:
    int compareBitonicSums(vector<int>& nums) {
        
      int size = nums.size();

      int peakIndex = findPeak(nums,size);

      long long int ascPart = 0;
      long long int descPart = 0;

      for(int i = 0; i < size;i++){
           if(i <= peakIndex){
                ascPart += nums[i];
           }
           
           if(i >= peakIndex){
            descPart += nums[i];
           }
        }
        if(ascPart > descPart) return 0;
        else if(ascPart < descPart) return 1;
        
        return -1;
    }
};