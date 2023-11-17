#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    //Default Ctor for without data value
    Node() : data(0), next(NULL) {}

    Node(int data) : data(data), next(NULL) {}

    ~Node() {
        cout << "Destructor Called" << endl;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
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

void AdditionOfOne(Node* &head, Node* &tail){
    //1. reverse kro
    Reverse(head,tail);

    //2. Adding 1
    int Carry = 1;
    Node* temp = head;
    while (temp->next != NULL)
    {
        int totalSum = temp->data + Carry;
        int digit = totalSum % 10;
        Carry = totalSum / 10;

        temp->data = digit;
        temp = temp->next;

        // If Carry is 0 means no neend to create newNode
        if (Carry == 0) 
        {
            break;
        }
        
    }

    //catch: carry 1 list ke bahar gya to new node create kro
    if (Carry != 0) 
    {
        int totalSum = temp->data + Carry;
        int digit = totalSum % 10;
        Carry = totalSum / 10;

        temp->data = digit;
        if (Carry != 0)
        {
        Node* newNode = new Node(Carry);
        temp->next = newNode;
        }
        
    }
    
    //3. reverse kro
    Reverse(head,tail);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    

    AddNode(head, tail, 9);
    AddNode(head, tail, 9);
    AddNode(head, tail, 9);

    cout << "Before: " << endl;
    print(head);

    AdditionOfOne(head, tail);
    cout << "After: " << endl;
    print(head);

    return 0;
}
