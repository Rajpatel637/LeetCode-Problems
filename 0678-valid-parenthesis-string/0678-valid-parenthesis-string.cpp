class Solution {
public:
    bool checkValidString(string s) {

        int size = s.length();

        int mini = 0;

        int maxi = 0;

        for(int i = 0; i < size;i++){
            char ch = s[i];

            if(ch == '('){
                mini++;
                maxi++;
            }
            else if(ch == ')'){
               mini--;
               maxi--;
            }
            else if(ch == '*'){
                mini -= 1;
                maxi += 1;
            }

            if(mini < 0) mini = 0;

            if(maxi < 0) return false;
        }

        if(mini == 0 && maxi >= 0) return true;

        return false;

    }
};