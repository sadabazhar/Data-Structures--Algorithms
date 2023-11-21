#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;   
    int size;   
    int top1;    
    int top2;    

    Stack(int size){
        this->size = size;    
        arr = new int[size];  
        this->top1 = -1;      
        this->top2 = size;      
    }

void push1(int data){
    if(top1 + 1 == top2){  // Overflow for stack 1
       cout<<"Stack1 is overflow"<<endl;
    } else {
        top1++;
        arr[top1] = data;
    }
}

void push2(int data){
    if(top2 - 1 == top1){  // Overflow for stack 2
       cout<<"Stack2 is overflow"<<endl;
    } else {
        top2--;
        arr[top2] = data;
    }
}

void pop1(){
    if(top1 == -1){  // Underflow
        cout<<"Stack1 is underflow"<<endl;
    }else{
        arr[top1] = 0;
        top1--;
    }
}
void pop2(){
    if(top2 == size){  // Underflow
        cout<<"Stack2 is underflow"<<endl;
    }else{
        arr[top2] = 0;
        top2++;
    }
}

void print1(){

    if(top1 == -1){  // Underflow
        cout<<"Can't print bcz of No elements in stack1"<<endl;
    }else{
    cout<<"Printing stack1 element: ";
    for (int i = 0; i <= top1; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    }
}

void print2(){
    if(top2 == size){  // Underflow
        cout<<"Can't print bcz of No elements in stack2"<<endl;
    }else{
    cout<<"Printing stack2 element: ";
    for (int i = size-1; i >= top2; i--)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    }
}

};
int main(){
    Stack st(5);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(50);
    st.push2(40);
    st.push2(40);
    st.push1(30);

    st.pop1();
    st.pop1();
    st.pop1();
    st.pop1();
    st.pop2();
    st.pop2();
    st.pop2();

    st.print1();
    st.print2();
    return 0;
}