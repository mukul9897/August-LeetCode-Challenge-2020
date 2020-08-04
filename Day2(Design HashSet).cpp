class MyHashSet {
    int numb;
    vector<vector<int>> b;
    
    int hash_function(int key){
        return key%numb;
    }
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        numb=15000;
        b=vector<vector<int>>(numb,vector<int>{});
    }
    
    void add(int key) {
       int i=hash_function(key);
        if(find(b[i].begin(),b[i].end(),key)==b[i].end())
            b[i].push_back(key);
    }
    
    void remove(int key) {
        int i=hash_function(key);
        auto it=find(b[i].begin(),b[i].end(),key);
        if(it!=b[i].end())
            b[i].erase(it);  
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
       int i=hash_function(key);
        if(find(b[i].begin(),b[i].end(),key)==b[i].end())
            return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
