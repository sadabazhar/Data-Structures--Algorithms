#include<iostream>
using namespace std;
int printDigits(int num){
    int digit, result = 0;
    while(num != 0){
        digit = num % 10;
        result = result * 10 + digit;
        num /= 10;
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter number here: ";
    cin>>num;
    cout<<"After reversing "<<printDigits(num);
    return 0;
}