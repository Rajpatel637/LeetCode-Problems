class Solution {
public:
    string sortVowels(string s) {
        priority_queue<int,vector<int>,greater<int>> q;

        for(int i = 0; i < s.length();i++){
            char ch = toupper(s[i]);
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                q.push(s[i]);
            }
        }

        int i = 0;

        while(!q.empty()){
            char ch = toupper(s[i]);
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                s[i] = q.top();
                q.pop();
            }
            i++;
        }

        return s;

        
    }
};