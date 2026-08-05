class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> ans;

        int size = events.size();

        int totalScore = 0;
        int counter = 0;

        for (int i = 0; i < size; i++) {
            string temp = events[i];
            if (counter == 10) {
                    break;
                }

            if (temp == "0" || temp == "1" || temp == "2" || temp == "3" ||
                temp == "4" || temp == "6") {
                totalScore += stoi(temp);
            } else if (temp == "W") {
                counter++;
            } else if (temp == "WD" || temp == "NB") {
                totalScore++;
            }
        }

        ans.push_back(totalScore);
        ans.push_back(counter);

        return ans;
    }
};