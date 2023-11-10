#include<iostream>
#include<string.h>
using namespace std;

bool Palindrome(char ch[]){
    int i = 0, j = strlen(ch) - 1;
    while (i<=j)
    {
        if(ch[i++] == ch[j--]) return true;
    }
    return false;
}

int main(){
    char ch[100];
    cout<<"Enter the value of string: ";
    cin.getline(ch, 12); 
    if(Palindrome(ch)) cout<<"Palindrome!";
    else cout<<"Not Palindrome!";  
    return 0;
}