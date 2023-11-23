#include<iostream>
using namespace std;

class Deque{
    public:
        int *arr;
        int size;
        int front;
        int rear;
    
    Deque(int size){  // Ctor for iniatilizing array dynamic allocation
        this->size = size;
        arr = new int[size];
        this->front = -1; 
        this->rear = -1; 
    }

    //Basic Operations of a Queue
    void push_front(int data){
        if (Full()) // Case 1: Queue full
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else if (front == -1) // Case 2: Queue empty -> single element
        {
            front++;
            rear++;
            arr[front] = data;
        }
        else if(rear != size -1 && front == 0){ // Circular insertion
            front = size-1;
            arr[front] = data;
        }
        else{                 // Case 4: Normal
            front--;
            arr[front] = data;
        }
    }

    void push_back(int data){
        if (Full()) // Case 1: Queue full
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else if (front == -1) // Case 2: Queue empty -> single element
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size -1 && front != 0){ // Circular insertion
            rear = 0;
            arr[rear] = data;
        }
        else{                 // Case 4: Normal
            rear++;
            arr[rear] = data;
        }
    }

    void pop_front(){
        if (Empty()) // Case 1: Queue Empty
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if (front == rear) // Case 2: Single element -> Empty Q
        {
            arr[front] = -1;
            // set front & rear = 0 (For reusing)
            front = -1;
            rear = -1;
        }
        else if (front == size-1) // Case 3: Circular deletion
        {
            arr[front] = -1;
            front = 0;
        }
        else{           // Case 4: Normal
            arr[front] = -1;
            front++;
        }
    }

    void pop_back(){
        if (Empty()) // Case 1: Queue Empty
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if (front == rear) // Case 2: Single element -> Empty Q
        {
            arr[rear] = -1;
            // set front & rear = -1 -> menas queue empty
            front = -1;
            rear = -1;
        }
        else if (rear == 0) // Case 3: Circular deletion
        {
            arr[rear] = -1;
            rear = size-1;
        }
        else{           // Case 4: Normal
            arr[rear] = -1;
            rear--;
        }
    }

    void Print(){
        if (Empty()) {
            cout << "No elements are present" << endl;
        } else {
            cout << "Element of Circular Queue: ";
            if (rear >= front) {
                for (int i = front; i <= rear; i++) {
                    cout << arr[i] << " ";
                }
            } else {
                for (int i = front; i < size; i++) {
                    cout << arr[i] << " ";
                }
                for (int i = 0; i <= rear; i++) {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
        }
    }


    bool Empty(){
        if (front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }

    bool Full(){
        if ((front == 0 && rear == size - 1) || rear == (front -1))
        {
            return true;
        }
        return false;
    }



    int Size(){
        if (Empty()) {
            return 0; // Queue is empty
        } else if (front <= rear) {
            return rear - front + 1; // Linear arrangement of elements
        } else {
            return size - front + rear + 1; // Circular arrangement of elements
        }
    }

    int GetFront(){
        return arr[front];
    }

    int GetRear(){
        return arr[rear];
    }
};

int main(){
   
    Deque DQ(5);
    DQ.push_front(3);
    DQ.push_front(2);
    DQ.pop_front();
    DQ.push_front(1);
    DQ.push_back(5);
    DQ.push_back(5);
    DQ.pop_back();
    DQ.Print();
    
    return 0;
}