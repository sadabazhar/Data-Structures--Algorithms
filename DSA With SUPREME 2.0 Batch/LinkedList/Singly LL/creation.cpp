#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};

void Print(Node *Head){
    Node *Temp = Head;

    while(Temp != 0){
        cout<< Temp->data<<" ";
        Temp = Temp->next;
    }
}

int main() {
    
    //Creating node
    Node *First = new Node(11);
    Node *Second = new Node(22);
    Node *Third = new Node(33);
    Node *Fourth = new Node(44);

    //Linking prenode to nextnode
    First->next = Second;
    Second->next = Third;
    Third->next = Fourth;


    //Creating head pointer for track record.
    Node *Head = First;
    Print(Head);
    return 0;
}
