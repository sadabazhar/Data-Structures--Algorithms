#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &st, int elem){
    //Base Case
    if(st.empty()){
        st.push(elem);
        return;
    }

    // 1 case me kr leta hu
    int temp = st.top();
    st.pop();

    // Baki recursion kr lega
    InsertAtBottom(st, elem);

    // Backtracking logic
    st.push(temp);
}

int main(){

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int elem;
    cout<<"Enter your key element that you want to insert at bottom: ";
    cin>>elem;
    
    InsertAtBottom(st, elem);

    cout<<"After, Element of Stack: "<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }

    return 0;
}