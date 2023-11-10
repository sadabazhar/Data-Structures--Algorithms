#include<iostream>
#include<string.h>
using namespace std;

void Reverse(char ch[]){
    int i=0, j = strlen(ch) -1;

    while(i<j){
        swap(ch[i++], ch[j--]);
    }
}

int main(){
    char ch[100];
    cout<<"Enter the value of string: ";
    cin.getline(ch, 12);
    cout<<"Before: "<<ch<<endl; 

    Reverse(ch);
    cout<<"After: "<<ch<<endl;
    return 0;
}