class Solution {

// private:

//     bool checkAnagram(string s1,string s2){
//         sort(s1.begin(),s1.end());
//         sort(s2.begin(),s2.end());

//         if(s1 != s2) return false;
        
//         return true;
//     }


//     vector<string> getGroup(vector<string>& strs,int index,unordered_map<string,bool> &mp){
//         int n = strs.size();
//         string s = strs[index];

//         vector<string> ans;

//         if(mp.find(s) != mp.end()) return ans;
//         else {
//             mp[s] = true;
//             ans.push_back(s);
//         }

//         for(int i = index+1; i < n;i++){
//             if(checkAnagram(s,strs[i])){
//                 mp[strs[i]] = true;
//                 ans.push_back(strs[i]);
//             }
//         }

//         return ans;
//     }

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;

        int n = strs.size();

        // for(int i = 0; i < n;i++){
        //     vector<string> temp = getGroup(strs,i,mp);
        //     if(temp.size() != 0){
        //         ans.push_back(temp);
        //     }
        // }

        for(int i = 0; i < n;i++){
            string temp = strs[i];

            sort(temp.begin(),temp.end());

            mp[temp].push_back(strs[i]);
        }

        for(auto &i : mp){
            ans.push_back(i.second);
        }

        return ans;
    }
};