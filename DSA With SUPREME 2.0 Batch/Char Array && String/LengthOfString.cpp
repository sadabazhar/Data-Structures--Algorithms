#include<iostream>
using namespace std;

int main(){
    char ch[12];
    //Declear 'count' for Counting length of string
    int count = 0;
    cout<<"Enter the value of string: ";
    cin.getline(ch, 12);

    for(int i=0 ; i<12 ; i++){
        if(ch[i] != '\0'){
            count++;
        }else break;
    }
    cout<<"Length of string: "<<count;
    return 0;
}