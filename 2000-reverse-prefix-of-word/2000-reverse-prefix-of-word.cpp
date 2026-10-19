class Solution {

private:

    void revStr(string& s, int st,int e){
        while(st < e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }

public:
    string reversePrefix(string word, char ch) {
        

        for(int i = 0; i < word.length();i++){
            if(word[i] == ch){
                revStr(word,0,i);
                break;
            }
        }

        return word;
    }
};