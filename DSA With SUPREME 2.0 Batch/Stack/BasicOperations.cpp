#include<iostream>
using namespace std;

class Stack{
    private:
    int* arr;   //Dynamic array
    int size;   //Total size of stack
    int top;    //Top pointer of stack

    public:
    Stack(int data){
        this->arr = new int[size];
        this->size = size;    
        this->top = -1;
    }

    //Basic Operations of stack
    void Push(int data);
    void Pop();
    void Print();
    int Empty();
    int GetSize();
    int GetTop();
};

void Stack::Push(int data){
    if(top == size-1){
        cout<<"Stack Overflow, can't insert"<<endl;
        return;
    }else{
        top++;
        arr[top] = data;
    }
}

void Stack::Pop(){
    if(Empty()){
        cout<<"Stack Underflow, can't delete"<<endl;
        return;
    }else{
        top--;
    }
}

void Stack::Print(){
    if(!Empty()){
        cout<<"Elements of stack: ";
        for(int i=0 ; i<=top ; i++){
        cout<<arr[i]<<" ";
        }cout<<endl;
    }else cout<<"No elements";
}
int Stack::Empty(){
    if(top == -1){
        cout<<"Stack is empty"<<endl;
        return 1;
    }
    return 0;
}

int Stack::GetSize(){
    if(top != -1) return top+1;
    else return 0;
}

int Stack::GetTop(){
    if(top != -1) return arr[top];
    else return 0;
}

int main(){
    Stack st(10); // Stack of size 1 has been created
    st.Push(11);
    st.Push(22);
    st.Push(23);
    st.Push(32);
    st.Push(25);
    st.Print();
    st.Pop();
    st.Pop();
    st.Print();
    cout<<"Size of stack: "<<st.GetSize()<<endl;
    cout<<"Top element of: "<<st.GetTop();
}