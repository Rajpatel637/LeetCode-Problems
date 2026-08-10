class Compare {
public:
    bool operator()(pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }

        return a.first < b.first;
    }
};

class EventManager {
    vector<vector<int>> events;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> maxHeap;
    unordered_map<int, int> mp;

public:
    EventManager(vector<vector<int>>& events) {
        this->events = events;

        for (int i = 0; i < events.size(); i++) {
            maxHeap.push({events[i][1], events[i][0]});
        }

        for (int i = 0; i < events.size(); i++) {
            mp[events[i][0]] = events[i][1];
        }
    }

    void updatePriority(int eventId, int newPriority) {
        mp[eventId] = newPriority;
        maxHeap.push({newPriority, eventId});
    }

    int pollHighest() {

        int index = -1;

        while (!maxHeap.empty()) {
            if (maxHeap.top().first != mp[maxHeap.top().second])
                maxHeap.pop();
            else {
                index = maxHeap.top().second;
                maxHeap.pop();
                mp.erase(index);
                break;
            }
        }

        return index;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */