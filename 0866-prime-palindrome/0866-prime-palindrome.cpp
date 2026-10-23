class Solution {

private:

    bool checkPrime(int num){
        if(num < 2) return false;
        if(num < 4) return true;

        if(num % 2 == 0 || num % 3 == 0) return false;

        for(int i = 5; i*i <= num;i += 6){
            if(num % i == 0 || num %(i+2) == 0) return false;
        }
        return true;
    }

    bool checkPal(int num){
        int x = num;

        int sum = 0;

        while(num > 0){
            int q = num % 10;

            sum = (sum*10)  + q;

            num /= 10;
        }

        return x == sum;
    }

public:
    int primePalindrome(int n) {
        
        int i = n;

        while(true){
            
            int len = to_string(i).size();

            if(len % 2 == 0 && i > 11){
                i = pow(10,len);
                continue;
            }


            if(checkPal(i) && checkPrime(i)) return i;
            i++;
        }

        return -1;
    }
};