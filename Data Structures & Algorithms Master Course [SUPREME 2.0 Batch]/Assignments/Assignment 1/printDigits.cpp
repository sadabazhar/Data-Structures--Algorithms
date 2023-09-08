#include<iostream>
using namespace std;
void printDigits(int num){
    int digit;
    while(num != 0){
        digit = num % 10;
        cout<<digit<<" ";
        num /= 10;
    }
}

int main(){
    int num;
    cin>>num;
    printDigits(num);
    return 0;
}