class Solution {
public:
    string interpret(string command) {
        string str = "";

        for(int i = 0; i < command.length();i++){
            char ch = command[i];

            if(ch == 'G') str.push_back('G');
            else if(ch == '('){
                if(command[i+1] == ')') {
                    str.push_back('o');
                    i++;
                }
                else if(command[i+1] == 'a'){
                    str.push_back('a');
                    str.push_back('l');
                    i = i + 3;
                }
            }
        }

        return str;
    }
};