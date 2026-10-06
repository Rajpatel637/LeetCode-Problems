class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;

        int size = encoded.size();


        ans.push_back(first);

        for(int i = 0; i < size;i++){
            int x = encoded[i] ^ ans[i];
            ans.push_back(x);
        }

        return ans;
    }
};