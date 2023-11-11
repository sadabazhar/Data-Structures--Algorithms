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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node* &head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void AddNode(Node* &head, Node* &tail, int data, int position) {
    
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    int len = findLength(head);
    if (position == 1) {   //Insert At head
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return;
    } else if (position > len) {  //Insert At Tail
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
        return;
    } else { // Insert At specific Position
        Node* newNode = new Node(data);

        Node* prev = NULL;
        Node* curr = head;
        while (position > 1) {
            position--;
            prev = curr;
            curr = curr->next;
        }

        newNode->next = curr;
        prev->next = newNode;
    }
}

void DeleteNode(Node* &head, Node* &tail, int position) {
    
    int len = findLength(head);
 
    if(position > len){ //Check Index
        cout<<"Invalid Position "<<endl;
        return;
    }

    if (head == NULL) { //Check L.L is empty
        return;
    }

    if (head == tail) {  //Exception case for -> Single element
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    if (position == 1) {  //Delete node from Head
        Node* temp = head;
        head = head->next;
        delete temp;
    } else if (position == len) { //Delete node from tail
        Node* prev = head;
        while (prev->next != tail) {
            prev = prev->next;
        }
        prev->next = NULL;
        delete tail;
        tail = prev;
    } else { // Delete element from specific Position
        Node* prev = NULL;
        Node* curr = head;

        while (position > 1) {
            position--;
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    

    AddNode(head, tail, 11, 1);
    AddNode(head, tail, 22, 2);
    AddNode(head, tail, 33, 3);
    AddNode(head, tail, 44, 4);

    cout << "Before deleting: " << endl;
    print(head);

    DeleteNode(head, tail, 3);
    cout << "After deleting: " << endl;
    print(head);

    return 0;
}
