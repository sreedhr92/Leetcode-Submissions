class MyCircularQueue {
    vector<int> v;
    int front, back;   //back index points to the space after the last ele
public:
    MyCircularQueue(int k) {
        for(int i=0;i<k;i++) v.push_back(0);
        front = -1; back = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        v[back] = value; 
        if(back == v.size()-1) back=0;
        else back++; 
        if(front == -1) {front=0;}   //not empty anymore
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        if(front == back-1 || (front==v.size()-1 && back==0)) {front=-1; back=0;}  
            //becomes empty
        else if(front == v.size()-1) front=0;
        else front++;
        return true;
    }
    
    int Front() {
        if(!isEmpty()) return v[front];
        else return -1;
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        if(back != 0) return v[back-1];
        else return v[v.size()-1];
    }
    
    bool isEmpty() {
        if(front == -1) return true;
        else return false;
    }
    
    bool isFull() {
        if(front == back) return true;
        else return false;
    }
};
