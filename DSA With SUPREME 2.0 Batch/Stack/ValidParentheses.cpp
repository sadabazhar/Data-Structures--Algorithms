#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool CheckValid(string s){
    //creating stack for checking valid or not
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // 1 step: Push for opening brackets
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        // 2 step: Pop krdo jab adjacent elements same ho
        else{
            // Edge case for empty stack
            if (!st.empty())
            {
                if(ch == ')' && st.top() == '('){
                    st.pop();
                }
                else if(ch == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(ch == ']' && st.top() == '['){
                    st.pop();
                }else{
                    // No match
                    return false;
                }
            }else{
                return false;
            }
        }

    }

    //Last: agar stack empty hogya means all elements are arrenge in valid form
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    string s = "(){[]}[[]]";
    if(CheckValid(s)){
        cout<<"This is ordered valid parentheses";
    }else{
        cout<<"Not valid";
    }
}