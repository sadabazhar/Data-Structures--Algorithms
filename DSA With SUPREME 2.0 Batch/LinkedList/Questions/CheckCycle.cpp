#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

    Node() : data(0), next(NULL) {}
    Node(int data) : data(data), next(NULL) {}

};

bool CheckForLoop(Node* &head){
    Node* Fast = head;
    Node* Slow = head;

    while (Fast != NULL && Fast->next != NULL) {
        Fast = Fast->next;
        Fast = Fast->next; // Fast moves two steps
        Slow = Slow->next; // Slow moves one step
        if(Fast == Slow)
        return true;
    }
    return false;
}

int getStartPoint(Node* &head) {
    Node* Fast = head;
    Node* Slow = head;

    // Step 1: Detect loop using Floyd's Tortoise and Hare algorithm
    while (Fast != NULL && Fast->next != NULL) {
        Fast = Fast->next;
        Fast = Fast->next; 
        Slow = Slow->next; 
        if (Fast == Slow) {
            break; // Slow and fast meet at the same node
        }
    }

    // If no loop is present, return -1 (indicating no starting point)
    if (Fast != Slow) {
        return -1;
    }

    // Step 2: Reset one pointer to the head and move both one step at a time
    Slow = head;
    while (Fast != Slow) {
        Fast = Fast->next;
        Slow = Slow->next;
    }

    // Now Slow and Fast point to the starting node of the loop
    return Slow->data;
}


void RemoveLoop(Node* &head){
    Node* Fast = head;
    Node* Slow = head;

    // Step 1: Detect loop using Floyd's Tortoise and Hare algorithm
    while (Fast != NULL && Fast->next != NULL) {
        Fast = Fast->next;
        Fast = Fast->next; 
        Slow = Slow->next; 
        if (Fast == Slow) {
            break; // Slow and fast meet at the same node
        }
    }

    // Step 2: Reset one pointer to the head and move both one step at a time
    Slow = head;
    while (Fast != Slow) {
        Fast = Fast->next;
        Slow = Slow->next;
    }

    // Starting Point
    Node* StartPoint = Slow;
    Node* temp = Slow;

    while (temp->next != StartPoint)
    {
        temp = temp->next;
    }

    //Break the link
    temp->next = NULL;
}


int main() {
    
    //Creating node
    Node *First = new Node(11);
    Node *Second = new Node(22);
    Node *Third = new Node(33);
    Node *Fourth = new Node(44);
    Node *Fivth = new Node(55);
    Node *Sixth = new Node(66);
    Node *Seventh = new Node(77);

    //Linking prenode to nextnode
    First->next = Second;
    Second->next = Third;
    Third->next = Fourth;
    Fourth->next = Fivth;
    Fivth->next = Sixth;
    Sixth->next = Seventh;
    Seventh->next = Third;


    //Creating head pointer for track record.
    Node *Head = First;

    //Q1
    cout<<"--- Before ---"<<endl;
    if(CheckForLoop(Head)){
        cout<<endl<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }

    //Q2
    if(getStartPoint(Head) != -1 ){
        cout<<"Starting Point of loop is: "<<getStartPoint(Head)<<endl;
    }
    else{
        cout<<endl<<"Loop is not present"<<endl;
    }

    //Q3
    RemoveLoop(Head);
    cout<<"--- After ---"<<endl;
    if(CheckForLoop(Head)){
        cout<<endl<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
    return 0;
}