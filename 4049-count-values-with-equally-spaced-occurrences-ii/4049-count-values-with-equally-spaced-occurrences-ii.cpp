class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int cnt = 0;

        for(int i = 0; i < nums.size();i++){
            mp[nums[i]].push_back(i);
        }

        for(auto &i : mp){
            int size = i.second.size();
            if( size >= 3){
                int sum = i.second[1] - i.second[0];
                bool check = true;
                for(int j = 2; j < size;j++){
                     int temp = i.second[j] - i.second[j-1];
                     if(temp != sum){
                        check = false;
                        break;
                     }
                }

                if(check) cnt++;
            }
        }

        return cnt;
    }
};