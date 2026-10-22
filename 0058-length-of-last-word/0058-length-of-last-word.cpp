class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int actLength = 0;

        int size = s.length();

        for(int i = 0; i < size;i++){
            char ch = s[i];

            if(ch == ' '){
                if(length > 0){
                    actLength = length;
                    length = 0; 
                }
            }
            else{
                length++;
            }
        }

        if(length > 0) actLength = length;

        return actLength;
    }
};