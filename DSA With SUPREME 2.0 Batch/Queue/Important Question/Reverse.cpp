#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// Using Loops
void reverseQueue(queue<int> &q){
    
    stack<int> st;

    // Step 1: Queue ke elements ko stack me push kro && Queue ko pop kro
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    
    // Step 2: Stack ke elements ko wapas queue me push kro && stack ko pop kro
    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }

}

// Using Recursion
void recursionReverse(queue<int> &q){
    
    // Base Case
    if (q.empty())
    {
        return;
    }

    // 1 step me solve kr deta hu 
    int temp = q.front();
    q.pop();

    // Baki recursion sambhal lega
    recursionReverse(q);

    //Backtracking
    q.push(temp);
}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    recursionReverse(q);

    cout<<"Elements of queue: ";
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}