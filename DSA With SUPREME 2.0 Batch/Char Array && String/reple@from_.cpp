#include<iostream>
#include<string.h>
using namespace std;

void Replace(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
    cout<<"Replaced @ with ' ': "<<ch<<endl;
}

int main(){
    char ch[100];
    cout<<"Enter the value of string: ";
    cin.getline(ch, 12);
    cout<<"Orignal: "<<ch<<endl;
    Replace(ch);
    return 0;
}