//Redundant brackets (Unnecessary brackets) examples;
// (a+(b)), ((a+b)-(c)), ((a-b+)) 

#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool CheckRedundant(const string& s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == ')') {
            char top = st.top();
            st.pop();
            bool operatorsFound = false;

            while (top != '(') {
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    operatorsFound = true;
                }
                top = st.top();
                st.pop();
            }

            if (!operatorsFound) {
                return true; // Redundant brackets found
            }
        } else {
            st.push(ch);
        }
    }

    return false; // No redundant brackets found
}



int main(){

    string s ="(a + b) - (c * d)";

    if(CheckRedundant(s)){
        cout<<"Redundant brackets";
    }else{
        cout<<"Not Redundant brackets";
    }
    return 0;
}