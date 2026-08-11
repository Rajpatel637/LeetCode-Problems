class Solution {
public:
    string reverseByType(string s) {
        int size = s.length();

        vector<char> c;
        vector<char> a;

        for(int i = 0; i < size;i++){
            char ch = s[i];

            if(ch >= 'a' && ch <= 'z') a.push_back(ch);
            else c.push_back(ch);
        }

        reverse(c.begin(),c.end());
        reverse(a.begin(),a.end());
        
        int cIndex = 0;
        int aIndex = 0;
        string str = ""; 

        for(int i = 0; i < size;i++){
            char temp = s[i];

            if(temp >= 'a' && temp <= 'z'){
                str.push_back(a[aIndex]);
                aIndex++;
            } 
            else{
                str.push_back(c[cIndex]);
                cIndex++;
            }
        }

        return str;
        
    

        
    }
};