#include<iostream>
#include<string.h>
using namespace std;

void LowerCase(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] >= 'A' && ch[index] <= 'Z'){
            ch[index] = ch[index] - 'A'+ 'a';
        }
        index++;
    }
    cout<<"LowerCase: "<<ch<<endl;
}

void UpperCase(char ch[]){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] >= 'a' && ch[index] <= 'z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
    cout<<"UpperCase: "<<ch<<endl;
}

int main(){
    char ch[100];
    cout<<"Enter the value of string: ";
    cin.getline(ch, 12);
    cout<<"Orignal: "<<ch<<endl; 

    LowerCase(ch);
    UpperCase(ch);


    return 0;
}