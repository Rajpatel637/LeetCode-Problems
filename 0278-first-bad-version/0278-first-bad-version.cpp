// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {

private:

    int getBad(int n){
        int s = 1;
        int e = n;

        int mid = s + (e-s)/2;

        while(s <= e){
            if(isBadVersion(mid)){
                if(!isBadVersion(mid-1)) return mid;
                else e = mid-1;
            }
            else{
                if(isBadVersion(mid+1)) return mid+1;
                else{
                    s = mid+1;
                }
            }

            mid = s + (e-s)/2;
        }

        return e;
    }

public:
    int firstBadVersion(int n) {
        return getBad(n);
    }
};