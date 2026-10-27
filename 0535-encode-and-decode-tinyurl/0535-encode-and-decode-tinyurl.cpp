class Solution {

    unordered_map<string,string> mp;
    int cnt = 0;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        char ch = cnt;
        string str = "";
        str.push_back(ch);
        mp[str] = longUrl;
        cnt++;
        return str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));