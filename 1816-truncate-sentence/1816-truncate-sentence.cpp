class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> ans;

        int st = 0;
        int size = s.length();
        
        for(int i = 0; i < size;i++){
            if(s[i] == ' '){
                ans.push_back(s.substr(st,(i-st)));
                st = i + 1;
            }
        }

        ans.push_back(s.substr(st,(size-st)));

        string str = "";

        for(int i = 0; i < k;i++){
            str += ans[i];
            if(i != k-1){
               str += " ";
            }
            
        }

        return str;
    }
};