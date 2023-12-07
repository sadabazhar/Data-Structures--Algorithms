#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// Using Loops
void reverseKelements(queue<int> &q, int k){
    
    stack<int> st;
    int n = q.size();

    // Exception case
    if (k>n || k==0)
    {
        cout<<"Something was wrong"<<endl;
        return;
    }
    
    // Step 1: Queue ke elements ko stack me push kro && Queue ko pop kro
    for(int i=1 ; i<= k ; i++)
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

    // Step 3: Again Queue ke elements ko uske original position pe vejne ke liye stack use kro
    for(int i=0 ; i< (n-k) ; i++)
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    
    // Step 4: Stack ke elements ko wapas queue me push kro && stack ko pop kro
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

    int k;
    cout<<"Enter kth position that you want to reverse: ";
    cin>>k;

    reverseKelements(q, k);
    cout<<"Elements of queue: ";
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}