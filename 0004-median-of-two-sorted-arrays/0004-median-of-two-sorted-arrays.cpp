class Solution {

private: 
    
    vector<int> mergeArray(vector<int>& nums1, vector<int>& nums2,int size1,int size2){
        vector<int> v;

        int i = 0;
        int j = 0;

        while(i < size1 && j < size2){
              
            if(nums1[i] <= nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }

        while(i < size1){
            v.push_back(nums1[i]);
            i++;
        }

        while(j < size2){
            v.push_back(nums2[j]);
            j++;
        }

        return v;
    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        
        vector<int> ans = mergeArray(nums1,nums2,size1,size2);
        int size =  ans.size();
        
        if((size) % 2 == 0){
            return (ans[size/2 - 1] + ans[size/2])/2.0;
        }
        else {
            return (ans[size/2])/1.0;
        }
    }
};