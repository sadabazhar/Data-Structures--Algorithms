#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    //Default Ctor for without data value
    Node() : data(0), prev(NULL), next(NULL) {}

    Node(int data) : data(data), prev(NULL), next(NULL) {}

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
    
    int len = findLength(head);

    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position > len+1){ //Check Index
        cout<<"Invalid Position "<<endl;
        return;
    }

    if (position == 1) {   //Insert At head
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    } else if (position == len+1) {  //Insert At Tail
        Node* newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        return;
    } else { // Insert At specific Position
        Node* newNode = new Node(data);

        Node* prevNode = NULL;
        Node* currNode = head;
        while (position > 1) {
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }

        prevNode->next = newNode;
        newNode->prev = prevNode;
        newNode->next = currNode;
        currNode->prev = newNode;
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
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    } else if (position == len) { //Delete node from tail
        Node* prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        tail->next = NULL;
        delete tail;
        tail = prevNode;
    } else { // Delete element from specific Position
        Node* prevNode = NULL;
        Node* currNode = head;

        while (position > 1) {
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }

        prevNode->next = currNode->next;
        (currNode->next)->prev = prevNode;
        currNode->next = NULL;
        currNode->prev = NULL;
        delete currNode;
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

    DeleteNode(head, tail, 1);
    DeleteNode(head, tail, 4);
    cout << "After deleting: " << endl;
    print(head);

    return 0;
}
