#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    //Default Ctor for without data value
    Node() : data(0), next(NULL) {}

    Node(int data) : data(data), next(NULL) {}

};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void AddNode(Node* &head, Node* &tail, int data) {
    
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else {   //Insert At head
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return;
    }
}

void Reverse(Node* &head, Node* &tail){
    Node* prevNode = NULL;
    Node* currNode = head;
    Node* newNode;  

    while(currNode != 0){
        newNode = currNode->next; // Exeption case for track record
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = newNode;
    }
    
    tail = head;   //Now tail = head & head = tail
    head = prevNode;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    

    AddNode(head, tail, 11);
    AddNode(head, tail, 22);
    AddNode(head, tail, 33);
    AddNode(head, tail, 44);

    cout << "Before Reversing: " << endl;
    print(head);

    Reverse(head, tail);
    cout << "After Reversing: " << endl;
    print(head);

    return 0;
}
