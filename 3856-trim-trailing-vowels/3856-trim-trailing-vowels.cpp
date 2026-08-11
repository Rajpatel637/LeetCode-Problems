class Solution {
public:
    string trimTrailingVowels(string s) {
        

        int size = s.length();
        int x = size-1;

        while(x >= 0){
            char ch = s[x];

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                x--;
            }
            else {
                break;
            }
        }

        string str = "";
        
        for(int i = 0; i <= x;i++){
            str.push_back(s[i]);
        }

        return str;
    }
};