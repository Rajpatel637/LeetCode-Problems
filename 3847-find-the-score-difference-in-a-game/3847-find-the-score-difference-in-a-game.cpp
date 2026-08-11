class Solution {

private:
public:
    int scoreDifference(vector<int>& nums) {

        pair<int, bool> player1 = {0, true};
        pair<int, bool> player2 = {0, false};

        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 != 0) {
                if (player1.second) {
                    player1.second = false;
                    player2.second = true;
                } else {
                    player1.second = true;
                    player2.second = false;
                }
            }
            if (i % 6 == 5) {
                if (player1.second) {
                    player1.second = false;
                    player2.second = true;
                } else {
                    player1.second = true;
                    player2.second = false;
                }
            }

            if (player1.second) {
                player1.first += nums[i];
            } else {
                player2.first += nums[i];
            }
        }

        return player1.first - player2.first;
    }
};