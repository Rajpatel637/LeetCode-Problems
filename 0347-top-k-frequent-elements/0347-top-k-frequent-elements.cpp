class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto& i : mp) {
            q.push({i.second, i.first});
            if (q.size() > k) {
                q.pop();
            }
        }

        while (!q.empty()) {
            pair<int, int> p = q.top();
            ans.push_back(p.second);
            q.pop();
        }

        return ans;
    }
};