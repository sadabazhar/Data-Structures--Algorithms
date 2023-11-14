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


void FindMiddleNode(Node* &head) { // Slow & Fast Approach
    Node* Fast = head;
    Node* Slow = head;

    while (Fast != NULL && Fast->next != NULL) {
        Fast = Fast->next;
        Fast = Fast->next; // Fast moves two steps
        Slow = Slow->next; // Slow moves one step
    }
    cout << "Middle Node: " << Slow->data << endl;
}


void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    

    AddNode(head, tail, 66);
    AddNode(head, tail, 55);
    AddNode(head, tail, 44);
    AddNode(head, tail, 33);
    AddNode(head, tail, 22);
    AddNode(head, tail, 11);

    cout << "Nodes: ";
    print(head);

    FindMiddleNode(head);
    return 0;
}
