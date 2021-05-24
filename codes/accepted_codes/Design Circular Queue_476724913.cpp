class MyCircularQueue {
public:
    vector<int> q;
    int capacity;
    int size;
    int front;
    int rear;
    MyCircularQueue(int k) {
        for(int i=0;i<k;i++)
            q.push_back(0);
        size=0;
        front=-1;
        rear=-1;
        capacity=k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        rear=(rear+1)%capacity;
        q[rear]=value;
        size++;
        return true;
        
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        front=(front+1)%capacity;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return q[(front+1)%capacity];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return q[rear];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
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
