struct pairHash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

struct compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        if (a.first > b.first)
            return true;

        if (a.first == b.first)
            return a.second > b.second;

        return false;
    }
};

class AuctionSystem {

    unordered_map<int, set<pair<int, int>, compare>> userBid;
    unordered_map<pair<int, int>, int,pairHash> mp;

public:
    AuctionSystem() {}

    void addBid(int userId, int itemId, int bidAmount) {
        if (mp.find({userId, itemId}) != mp.end()) {
            auto it = userBid[itemId].begin();
            while (it != userBid[itemId].end()) {
                if (it->second == userId) {
                    userBid[itemId].erase(it);
                    break;
                }
                it++;
            }

            userBid[itemId].insert({bidAmount, userId});
            mp[{userId, itemId}] = bidAmount;

        } else {
            userBid[itemId].insert({bidAmount, userId});
            mp[{userId, itemId}] = bidAmount;
        }
    }

    void updateBid(int userId, int itemId, int newAmount) {
        int oldBid = mp[{userId, itemId}];
        userBid[itemId].erase({oldBid, userId});

        userBid[itemId].insert({newAmount, userId});
        mp[{userId, itemId}] = newAmount;
    }

    void removeBid(int userId, int itemId) {

        int oldBid = mp[{userId, itemId}];
        userBid[itemId].erase({oldBid, userId});
        mp.erase({userId, itemId});
    }

    int getHighestBidder(int itemId) {
        // pair<int,int> ans = userBid[itemId].begin();

        if(!userBid[itemId].empty()) return userBid[itemId].begin()->second;
        return -1;

    }
};

/**
 * Your AuctionSystem object will be instantiated and called as such:
 * AuctionSystem* obj = new AuctionSystem();
 * obj->addBid(userId,itemId,bidAmount);
 * obj->updateBid(userId,itemId,newAmount);
 * obj->removeBid(userId,itemId);
 * int param_4 = obj->getHighestBidder(itemId);
 */