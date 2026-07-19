class MyCircularQueue {
private:
 int * queue; 
 int size = 0, rear = 0, front = 0;
public:
    MyCircularQueue(int k) {
        queue = new int[k];
        size = k; 
        front = rear = -1;
    }
    
    bool enQueue(int value) {
       if(isFull()) return false;
       else if(isEmpty()){
         rear = front = 0;
         queue[0] = value;
         return true;
       }
       else {
          rear = (rear+1)%size;
          queue[rear] = value;
          return true;
       }
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        else if  (rear == front) {
            front = rear = -1;
            return true;
        }
        else {
            front = (front+1)%size; // first element delete hoga 
            return true;
        }
    }
    
    int Front() {
       return front == -1 ? -1 : queue[front];
    } 
    
    int Rear() {
        return rear == -1 ? -1 : queue[rear];
    }
    
    bool isEmpty() {
       return rear == -1 || front == -1;
    }
    
    bool isFull() {
        return (rear+1)%size == front ? true : false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */