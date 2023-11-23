#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;
    
    Queue(int size){  // Ctor for iniatilizing array dynamic allocation
        this->size = size;
        arr = new int[size];
        this->front = -1; 
        this->rear = -1; 
    }

    //Basic Operations of a Queue
    void Enqueue(int data){
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

    void Dequeue(){
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
        if(Empty()) return 0;
        else return rear-front+1;
    }

    int GetFront(){
        return arr[front];
    }

    int GetRear(){
        return arr[rear];
    }
};

int main(){
   
    Queue Q(5);
    Q.Enqueue(1);
    Q.Enqueue(2);
    Q.Enqueue(3);
    Q.Enqueue(4);
    Q.Enqueue(5);
    cout<<"---Before---"<<endl;
    Q.Print();
    Q.Dequeue();
    Q.Dequeue();
    Q.Dequeue(); 
    Q.Dequeue();
    Q.Enqueue(6);
    Q.Enqueue(7);
    Q.Enqueue(8);
    Q.Enqueue(9);
    Q.Enqueue(10);
    cout<<"---After---"<<endl;
    Q.Print();
    
    return 0;
}