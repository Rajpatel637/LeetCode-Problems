class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(int i = 0; i < address.length();i++){
            char c = address[i];
            if(c == '.'){
               ans.push_back('[');
               ans.push_back('.');
               ans.push_back(']');
            }
            else{
                ans.push_back(c);
            }

        }
        return ans;
    }
};