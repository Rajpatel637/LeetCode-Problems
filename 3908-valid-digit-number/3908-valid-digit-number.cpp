class Solution {
public:
    bool validDigit(int n, int x) {
        bool mark = false;

        int temp = n;
        int first = 0;

        while (temp > 0) {
            int q = temp % 10;
            if (q == x)
                mark = true;  

            first = q;    
            temp = temp / 10;
            
        }

        if(mark){
            if(first == x) return false;
            return true;
        }

        return false;
    }
};