class Solution {

private:

    struct Cmp{
        bool operator()( pair<int,int> &a, pair<int,int> &b) {
            if(a.second != b.second) return a.second > b.second;

            return a.first < b.first;
        }
    };

public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,Cmp> q;
        vector<int> v;

        for(int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto &i : mp){
            pair<int,int> p = make_pair(i.first,i.second);
            q.push(p);
        }

        while(!q.empty()){
            pair<int,int> p = q.top();
            for(int i = 0; i < p.second;i++){
                v.push_back(p.first);
            }
            q.pop();
        }

        return v;
    }
};