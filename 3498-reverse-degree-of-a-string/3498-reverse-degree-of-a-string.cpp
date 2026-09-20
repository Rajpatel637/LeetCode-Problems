class Solution {

private:

    int getNum(char ch,int index){
        int value = 'z' - ch;
        int revAns = value + 1;

          
        return revAns * (index+1);
    }

public:
    int reverseDegree(string s) {

        int sum = 0;

        for(int i = 0; i < s.length();i++){
            int ans = getNum(s[i],i);

            sum += ans;
        }

        return sum;   
    }
};