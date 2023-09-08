// Note: if a binarybit's least significant bit is 1
// We say it is odd number i.e; 5 -> 101.

#include<iostream>
using namespace std;
bool checkEvenOdd(int num){
    if((num&1) == 0) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter number here: ";
    cin>>num;
    if(checkEvenOdd(num)){
        cout<<num<<" is Even";
    }else{
        cout<<num<<" is Odd";
    }
    return 0;
}