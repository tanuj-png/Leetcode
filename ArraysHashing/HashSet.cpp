class MyHashSet {
public:
bool exist[1000001];
    MyHashSet() {
        for(int i=0;i<100000;i++){
            exist[i]=false;
        }
    }
    void add(int key) {
        exist[key]=true;
    }
    void remove(int key) {
        exist[key]=false;
    }
    bool contains(int key) {
        return exist[key];
    }
};