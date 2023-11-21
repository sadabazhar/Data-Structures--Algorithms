#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;   //Dynamic array
    int size;   //Total size of stack
    int top;    //Top pointer of stack

    Stack(int data){
        arr = new int[size];  //Dyamic array created with unknown size
        this->size = size;    
        this->top = -1;       //Top set to -1 at creation time of stack
    }
};

int main(){
    Stack st(10); // Stack of size 1 has been created
}