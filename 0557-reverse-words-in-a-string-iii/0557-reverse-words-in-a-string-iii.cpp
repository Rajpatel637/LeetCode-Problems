class Solution {

private:

    void revStr(string &s, int st,int e){
        while(st < e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }

public:
    string reverseWords(string s) {
        int st = 0;

        int n = s.length();

        for(int i = 0; i < n;i++){
            char ch = s[i];

            if(ch == ' '){
                revStr(s,st,i-1);
                st = i+1;
            }
        }

        revStr(s,st,n-1);

        return s;
    }
};