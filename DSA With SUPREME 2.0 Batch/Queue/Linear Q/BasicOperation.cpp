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
        else if (front == -1) // Case 2: Queue empty
        {
            front++;
            rear++;
            arr[rear] = data;
        }else{                 // Case 3: Normal
            rear++;
            arr[rear] = data;
        }
    }

    void Dequeue(){
        if (front == -1) // Case 1: Queue Empty
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if (front == rear) // Case 2: Single element -> Empty Q
        {
            arr[front] = 0;
            // set front & rear = 0 (For reusing)
            front = -1;
            rear = -1;
        }
        
        else{           // Case 2: Normal
            arr[front] = 0;
            front++;
        }
    }

    void Print(){

        if (Empty()) //Exception case
        {
            cout<<"No elements are present"<<endl;
        }else{
            cout<<"Element of Queue: ";
            for (int i = front; i <= rear; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
    }

    bool Empty(){
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }

    bool Full(){
        if (rear >= size-1)
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
    Q.Dequeue();
    cout<<"---After---"<<endl;
    Q.Print();
    cout<<"Size of Queue: "<<Q.Size()<<endl;
    Q.Enqueue(6);
    cout<<"---After & After---"<<endl;
    Q.Print();
    cout<<"Size of Queue: "<<Q.Size()<<endl;
    return 0;
}