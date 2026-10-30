class Solution {

private:
    bool isEven(int num) {
        int sum = 0;

        while (num > 0) {

            int q = num % 10;

            sum += q;

            num /= 10;
        }

        if (sum % 2 == 0)
            return true;

        return false;
    }

public:
    int countEven(int num) {
        int cnt = 0;

        vector<int> v(num+1,-1);

        for(int i = 2; i <= num;i++){
            if(v[i] == -1){
                v[i] = isEven(i);
                if(v[i]) cnt++;
            }
            else if(v[i]) cnt++;
        }

        return cnt;
    }
};