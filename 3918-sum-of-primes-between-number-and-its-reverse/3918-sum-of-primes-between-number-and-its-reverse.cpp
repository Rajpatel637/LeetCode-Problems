
class Solution {

private:

   
    bool checkPrime(int num){

        if(num == 1) return false;

        for(int i = 2 ; i < num;i++){
            if(num % i == 0) return false;
        }

        return true;
    }

    int revNum(int n){
        int x = n;

        int rev = 0;

        while(x != 0){
            int q = x % 10;

            rev = 10*rev + q;

            x = x / 10;
        }

        return rev;
   }


public:
    int sumOfPrimesInRange(int n) {
        
        int rev = revNum(n);
        int sumPrime = 0;

        if(n > rev){
            for(int i = rev; i <= n;i++){
                if(checkPrime(i)) sumPrime += i;
                
            }
        }
        else if(n < rev){
            for(int i = n; i <= rev;i++){
                if(checkPrime(i)) sumPrime += i;
            }
        }
        else{
            if(checkPrime(n)) return n;
        }

        return sumPrime;
    }
};