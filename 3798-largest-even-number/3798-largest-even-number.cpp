class Solution {
public:
    string largestEven(string s) {
        string str = "";

        if(s.empty()) return str;

        if(s[s.length()-1] == '2') return s;
        else{
            int len = s.length()-1;

            while(len >= 0){
                string temp = s.substr(0,len+1);
                if(temp[temp.length()-1] == '2'){
                    return s.substr(0,len+1);
                }
                len--;
            }
        }

        return str;
    }
};