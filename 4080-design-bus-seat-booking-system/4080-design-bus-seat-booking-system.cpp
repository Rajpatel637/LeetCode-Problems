class BusBooking {
    int minTime;
    int totalTime;
    vector<vector<pair<bool,int>>> ans;

public:
    BusBooking(int n) {
        this->ans = vector<vector<pair<bool,int>>>(n + 1, vector<pair<bool,int>>(4));
        this->minTime = 0;
        this->totalTime = 0;
    }

    void toggle(string seat) {
        int charIndex = seat[0] - 'A';

        int seatRow = stoi(seat.substr(1));

        if (!ans[seatRow][charIndex].first) {
            if (charIndex == 1 || charIndex == 2) {
                totalTime++;
                ans[seatRow][charIndex].first = true;
                ans[seatRow][charIndex].second = 1;
                minTime++;

            } else {
                if ((charIndex == 0 && ans[seatRow][charIndex + 1].first) ||
                    (charIndex == 3 && ans[seatRow][charIndex - 1].first)) {
                    totalTime += 3;
                    ans[seatRow][charIndex].first = true;
                    ans[seatRow][charIndex].second = 3;
                } else if ((charIndex == 0 && !ans[seatRow][charIndex + 1].first) ||
                           (charIndex == 3 && !ans[seatRow][charIndex - 1].first)) {
                    totalTime += 1;
                    ans[seatRow][charIndex].first = true;
                    ans[seatRow][charIndex].second = 1;
                }

                minTime++;
            }
        } else {
            if (charIndex == 0 || charIndex == 3) {
                if (((charIndex == 0 && ans[seatRow][charIndex + 1].first) ||
                     (charIndex == 3 && ans[seatRow][charIndex - 1].first))) {
                    totalTime -= ans[seatRow][charIndex].second;
                    ans[seatRow][charIndex].first = false;
                    ans[seatRow][charIndex].second = 0;
                    minTime--;
                } else if ((charIndex == 0 && !ans[seatRow][charIndex + 1].first) ||
                           (charIndex == 3 && !ans[seatRow][charIndex - 1].first)) {
                    totalTime -= ans[seatRow][charIndex].second;
                    ans[seatRow][charIndex].first = false;
                    ans[seatRow][charIndex].second = 0;
                    minTime--;
                }
            } else if (charIndex == 1 || charIndex == 2) {
                totalTime -= ans[seatRow][charIndex].second;
                ans[seatRow][charIndex].first = false;
                ans[seatRow][charIndex].second = 0;;
                minTime--;
            }
        }
    }

    int getTotalTime() { return totalTime; }

    int getMinTime() { return minTime; }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */