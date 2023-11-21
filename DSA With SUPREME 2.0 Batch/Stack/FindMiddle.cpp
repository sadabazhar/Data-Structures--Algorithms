#include<iostream>
#include<stack>
using namespace std;

void Solve(stack<int> st, int pos){
    //Base case
    if(pos == 1){
        cout<<"Middle element: "<<st.top();
        return;
    }
    
    // 1 Case mene solve kiya
    pos--;
    int ans = st.top();
    st.pop();
    
    //Baki recursion sambhal lega
    Solve(st,pos);
    st.push(ans);
}

int MiddlePos(stack<int> st){
    if(st.empty()){
        cout<<"stack is empty, can't find middle element"<<endl;
        return -1;
    }else{
        int pos;
        int size = st.size();
        // Odd
        if(size & 1){
        pos = size/2+1;;
        }
        // Even
        else{
        pos = size/2;
        }

        // Actual logic
        Solve(st, pos);
        return 0;
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    MiddlePos(st);
    return 0;
}