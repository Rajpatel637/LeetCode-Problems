class MyHashSet {
    vector<bool> ans;
public:
    MyHashSet() : ans(1e6+1,0){
        
    }
    
    void add(int key) {
        ans[key] = true;
    }
    
    void remove(int key) {
        ans[key] = false;
    }
    
    bool contains(int key) {
        if(ans[key]) return true;

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */