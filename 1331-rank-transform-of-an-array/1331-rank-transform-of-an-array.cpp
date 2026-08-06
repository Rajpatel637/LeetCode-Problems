class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        unordered_map<int,pair<int,bool>> mp;
        int size = arr.size();

        sort(temp.begin(),temp.end());
        int cnt = 0;

        for(int i = 0; i < size;i++){
            if(!mp[temp[i]].second){
                mp[temp[i]].first = cnt+1;
                mp[temp[i]].second = true;
                ++cnt;
            }
        }

        for(int i = 0; i < size;i++){
            arr[i] = mp[arr[i]].first;
        }

        return arr;
    }
};