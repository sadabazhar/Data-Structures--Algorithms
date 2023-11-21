#include<iostream>
#include<stack>
using namespace std;

void InsertSortedStack(stack<int> &st, int elem){
    //Base case
    if(st.empty() || elem > st.top()){
        st.push(elem);
        return;
    }

    //Processing part
    int temp = st.top();
    st.pop();

    //Recursion
    InsertSortedStack(st, elem);

    //Backtracking
    st.push(temp);
}

void Sort(stack<int> &st){
    //Base Case
    if(st.empty()){
        return;
    }

    //Processing
    int temp = st.top();
    st.pop();

    //Recursion
    Sort(st);

    //Backtracking
    InsertSortedStack(st, temp);

}

int main(){

    stack<int> st;
    st.push(10);
    st.push(1);
    st.push(3);
    st.push(50);
    st.push(66);

    Sort(st);

    cout<<"After, Element of Stack: "<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }


    return 0;
}