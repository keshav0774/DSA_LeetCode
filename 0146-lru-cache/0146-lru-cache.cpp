class Node{
    public: 
    int key;
    int value;
    Node* prev; 
    Node* next;

    Node(int key,int value){
        this->key = key;
        this->value = value; 
        prev = next = nullptr;
    }
};
class LRUCache {  
public:
    int capacity;
    unordered_map<int,Node*>cache;
    Node* head; 
    Node* tail;
    void removeTheNode(Node* node){
        Node* back = node->prev;
        Node* fordward = node->next;
        back->next = fordward;
        fordward->prev = back;
    }
    void moveToTheHead(Node* node){
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }
    LRUCache(int capacity) {
        this->capacity = capacity; 
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        
        if(cache.find(key) != cache.end()){
            Node* node = cache[key];
            removeTheNode(node); 
            moveToTheHead(node);
            return node->value;
        }
        return -1;
    }
    
    void put(int key, int value) {

        // if eky already exsist
        if(cache.find(key) != cache.end()){
            Node* node = cache[key];
            node->value = value;
            removeTheNode(node); 
            moveToTheHead(node);
            return ;
        }
        if(cache.size() == capacity){
            Node* lrunode = tail->prev;
            removeTheNode(lrunode);
            cache.erase(lrunode->key);
            delete lrunode;
        }
        Node* insert = new Node(key,value);
        cache[key] = insert;
        moveToTheHead(insert); 
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */